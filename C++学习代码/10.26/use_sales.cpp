////4.程序清单15.16在每个try后面都使用两个catch块，以确保nbad_index异常导致方法label_val()被调用。请修改该程
////序，在每个try块后面只使用一个catch块，并使用RTTI来确保合适时调用label_val()。
//#include <iostream>
//#include <cstdlib>
//#include "sales.h"
//
//int main(void)
//{
//	double vals1[12] =
//	{
//		1220, 1100, 1122, 2212, 1232, 2334,
//		2884, 2393, 3302, 2922, 3002, 3544
//	};
//
//	double vals2[12] =
//	{
//		12, 11, 22, 21, 32, 34,
//		28, 29, 33, 29, 32, 35
//	};
//
//	Sales sales1(2011, vals1, 12);
//	LabeledSales sales2("Blogstar", 2012, vals2, 12);
//
//	Sales::bad_index* psales1;
//	LabeledSales::nbad_index* psales2;
//
//	cout << "First try block:\n";
//	try
//	{
//		int i;
//		cout << "Year = " << sales1.Year() << endl;
//		for (i = 0; i < 12; ++i)
//		{
//			cout << sales1[i] << " ";
//			if (i % 6 == 5)
//				cout << endl;
//		}
//		cout << "Year = " << sales2.Year() << endl;
//		cout << "Label = " << sales2.Label() << endl;
//		for (i = 0; i <= 12; ++i)
//		{
//			cout << sales2[i] << " ";
//			if (i % 6 == 5)
//				cout << endl;
//		}
//		cout << "End of try block 1.\n";
//	}
//	/*catch (LabeledSales::nbad_index& bad)
//	{
//		cout << bad.what();
//		cout << "Company: " << bad.label_val() << endl;
//		cout << "bad index: " << bad.bi_val() << endl;
//	}*/
//	catch (logic_error& bad)
//	{
//		cout << bad.what();
//		if (psales2 = dynamic_cast<LabeledSales::nbad_index*>(&bad))
//		{
//			/*cout << psales2->what();*/
//			cout << "Company: " << psales2->label_val() << endl;
//			cout << "bad index: " << psales2->bi_val() << endl;
//		}
//		else if (psales1 = dynamic_cast<Sales::bad_index*>(&bad))
//			cout << "bad index: " << psales1->bi_val() << endl;
//	}
//
//	cout << "\nNext try block:\n";
//	try
//	{
//		sales2[2] = 3.5;
//		sales1[20] = 23345;
//		cout << "End of try block 2.\n";
//	}
//	catch (logic_error& bad)
//	{
//		cout << bad.what();
//		if (psales2 = dynamic_cast<LabeledSales::nbad_index*>(&bad))
//		{
//			cout << "Company: " << psales2->label_val() << endl;
//			cout << "bad index: " << psales2->bi_val() << endl;
//		}
//		else if (psales1 = dynamic_cast<Sales::bad_index*>(&bad))
//			cout << "bad index: " << psales1->bi_val() << endl;
//	}
//	/*catch (Sales::bad_index& bad)
//	{
//		cout << bad.what();
//		cout << "bad index: " << bad.bi_val() << endl;
//	}*/
//	cout << "Done.\n";
//
//	return 0;
//}