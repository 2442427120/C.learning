//#pragma once
//#pragma once
//
//#ifndef __BASEDMA_H__
//#define __BASEDMA_H__
//
//#include <iostream>
//
//using namespace std;
//
//class baseDMA_ABC
//{
//private:
//	char* lable;
//	int rating;
////protected:
////	const char* Lable() const { return lable; }
////	int Rating() const { return rating; }
//public:
//	baseDMA_ABC(const char* l = "null", int r = 0);
//	baseDMA_ABC(const baseDMA_ABC& rs);
//	virtual ~baseDMA_ABC();
//	baseDMA_ABC& operator=(const baseDMA_ABC& rs);
//	virtual void View() const = 0;
//	//friend ostream& operator<<(ostream& os, const baseDMA_ABC& rs);
//};
//
//class lacksDMA : public baseDMA_ABC
//{
//private:
//	enum { COL_LEN = 40 };
//	char color[COL_LEN];
//public:
//	lacksDMA(const char* l = "null", int r = 0, const char* c = "blank");
//	lacksDMA(const baseDMA_ABC& rs, const char* c);
//	virtual void View() const;
//	/*friend ostream& operator<<(ostream& os, const lacksDMA& ls);*/
//};
//
//class hasDMA : public baseDMA_ABC
//{
//private:
//	char* style;
//public:
//	hasDMA(const char* l = "null", int r = 0, const char* s = "none");
//	hasDMA(const baseDMA_ABC& rs, const char* s);
//	hasDMA(const hasDMA& hs);
//	~hasDMA();
//	hasDMA& operator=(const hasDMA& hs);
//	virtual void View() const;
//	/*friend ostream& operator<<(ostream& os, const hasDMA& hs);*/
//};
//
//#endif
