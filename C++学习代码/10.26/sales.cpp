//#include "sales.h"
//
//Sales::Sales(int yy)
//{
//	year = yy;
//	for (int i = 0; i < MONTHS; i++)
//		gross[i] = 0;
//}
//
//Sales::Sales(int yy, const double* gr, int n)
//{
//	year = yy;
//	int lim = (n < MONTHS) ? n : MONTHS;
//	int i;
//	for (i = 0; i < lim; i++)
//		gross[i] = gr[i];
//	for (; i < MONTHS; i++)
//		gross[i] = 0;
//}
//
//double Sales::operator[](int i) const
//{
//	if (i < 0 || i >= MONTHS)
//		throw bad_index(i);
//	return gross[i];
//}
//
//double& Sales::operator[](int i)
//{
//	if (i < 0 || i >= MONTHS)
//		throw bad_index(i);
//	return gross[i];
//}
//
//Sales::bad_index::bad_index(int ix, const string& s) : logic_error(s), bi(ix)
//{
//}
//
//LabeledSales::LabeledSales(const string& lb, int yy) : Sales(yy)
//{
//	label = lb;
//}
//
//LabeledSales::LabeledSales(const string& lb, int yy, const double* gr, int n) : Sales(yy, gr, n)
//{
//	label = lb;
//}
//
//double LabeledSales::operator[](int i) const
//{
//	if (i < 0 || i >= MONTHS) //没有i = MONTHS这个条件的话，待i=12时会跳过下一条语句
//		throw nbad_index(Label(), i);	//nbad_index类不能直接访问LabeledSales类的私有成员，需使用成员方法
//	return Sales::operator[](i);	//和上面同理
//}
//
//double& LabeledSales::operator[](int i)
//{
//	if (i < 0 || i >= MONTHS)
//		throw nbad_index(Label(), i);
//	return Sales::operator[](i);
//}
//
//LabeledSales::nbad_index::nbad_index(const string& lb, int ix, const string& s) : Sales::bad_index(ix, s)
//{
//	lbl = lb;
//}