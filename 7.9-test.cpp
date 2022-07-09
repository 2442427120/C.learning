#include <iostream>

//编写一个程序，要求用户按欧洲风格输入汽车的耗油量（每100公里消耗的汽油量（升）），然后将其转换为美国风
//格的耗油量---每加仑多少英里。注意,除了使用不同的单位计量外，美国方法（距离/燃料）与欧洲方法（燃料/距）
//相反。100公里等于62.14英里，1加仑等于3.785升。因此，19mpg大约合12.4L/100km，27mpg大约合8.7L/100km
int main(void)
{
	using namespace std;

	const double Kilometer_to_mile = 62.14;	//每100公里等于32.14英里
	const double Gallon_to_liter = 3.785;	//每1加仑等于3.785升

	double gasoline;	//用户输入的每百公里耗油量
	double mpg;	//每加仑能跑多少英里

	cout << "请输入100公里汽车的耗油量（升）： ";
	cin >> gasoline;

	mpg = Kilometer_to_mile / (gasoline / Gallon_to_liter);
	cout << "每加仑汽油能跑 " << mpg << " 英里" << endl;

	return 0;
}

//编写一个程序，要求用户输入驱车里程(英里)和使用汽油量(加仑)，然后指出汽车耗油量为一加仑的里程。如果愿意
//，也可以让程序要求用户以公里为单位输入距离，并以升为单位输入汽油量，然后指出欧洲风格的结果---即每100公
//里的耗油量(升)。
//int main(void)
//{
//	using namespace std;
//
//	int kilometer, gasoline;	//里程数、耗油量
//
//	cout << "请输入驱车的里程（单位为公里）：";
//	cin >> kilometer;
//	cout << "请输入汽油量（以升为单位）: ";
//	cin >> gasoline;
//
//	cout << "每100公里耗油量为： " << (double)gasoline / (double)kilometer * 100 << endl; 
//
//	return 0;
//}

//编写一个程序，要求用户输入全球当前人口和美国当前的人口(或其他国家的人口)。将这些信息存储在long long变
//量中，并让程序显示美国(或其他国家)的人口占全球人口的百分比。该程序的输出应与下面类似：
//Enter the world's population: 6898758899
//Enter the population of the US: 310783781
//The population of the US is 4.50492% of the world popuation.
//int main(void)
//{
//	using namespace std;
//
//	long long world_population, US_population;	//世界人口，美国人口
//	double percentage;	//美国人口占全球人口百分比
//
//	cout << "Enter the world's population: ";
//	cin >> world_population;
//	cout << "Enter the population of the US: ";
//	cin >> US_population;
//
//	percentage = (double)US_population / (double)world_population * 100;
//	cout << "The population of the US is " << percentage << "% of the world population" << endl;
//
//	return 0;
//}

//编写一个程序，要求用户以整数方式输入秒数(使用long或long long 变量存储)，然后以天、小时、分钟和秒的方式
//显示这段时间。使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。该程序的输入应与以
//下面类似：
//Enter the number of seconds: 31600000
//31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
//int main(void)
//{
//	using namespace std;
//
//	const int Day_to_hours = 24;	//1天等于24小时
//	const int Hours_to_minutes = 60;	//1小时等于60分钟
//	const int Minutes_to_seconds = 60;	//1分钟等于60秒
//
//	//用户输入的秒数
//	long total_seconds;
//	//得到的天数、小时、分钟、秒
//	int days, hours, minutes, seconds;
//
//	cout << "Enter the number of seconds: ";
//	cin >> total_seconds;
//
//	days = total_seconds / Minutes_to_seconds / Hours_to_minutes / Day_to_hours;
//	//秒转换为小时，再用得到的小时%24得到剩余的小时数
//	hours = (total_seconds / Minutes_to_seconds / Hours_to_minutes) % Day_to_hours;
//	//秒转化为分钟，再用得到的分钟%60得到余下的分钟数
//	minutes = (total_seconds / Minutes_to_seconds) % Hours_to_minutes;
//	//秒%60得到余下的秒数
//	seconds = total_seconds % Minutes_to_seconds;
//
//	cout << total_seconds << " seconds = " << days << " days, " << hours << " hours, ";
//	cout << minutes << " minutes, " << seconds << " seconds" <<endl;
//
//	return 0;
//}

//编写一个程序，要求用户以度、分、秒的方式输入一个维度，然后以度为单位显示该维度。1度为60分，1分等于60秒，
//请以符号常量的方式表示这些值。对于每个输入值，应使用一个独立的变量存储它。
//下面是该程序运行时的情况：
//Enter the latitude in degress, minutes,and seconds:
//First, enter the degress: 37
//Next, enter the minutes of arc: 51
//Finally, enter the seconds of arc: 19
//37 degress, 51 minutes, 19 seconds = 37.8553 degress
//#define DEGRESS_TO_MINUTES 60	//1度等于60分
//#define MINUTES_TO_SECONDS 60	//1分等于60秒
//
//int main(void)
//{
//	using namespace std;
//
//	int degress, minutes, seconds;	//度，分，秒
//	double latitude;	//维度
//
//	cout << "Enter the latitude in degress, minutes, and seconds: " <<endl;
//	cout << "First, enter the degress: ";
//	cin >> degress;
//	cout << "Next, enter the minutes of arc: ";
//	cin >> minutes;
//	cout << "Finally, enter the seconds of arc: ";
//	cin >> seconds;
//
//	latitude = degress + ((double)minutes / DEGRESS_TO_MINUTES) + ((double)seconds / MINUTES_TO_SECONDS / DEGRESS_TO_MINUTES);
//	cout << " "<< degress << " degress" << ", " << minutes << " minutes" << ", " << seconds;
//	cout << " seconds = " << " " << latitude << " degress" << endl;
//
//	return 0;
//}


//编写一个小程序，要求以几英尺几英寸的方式输入其身高，并以磅为单位输入其体重。(使用3个变量来存储这些信息)
//该程序报告BMI(Body Mass Index, 体重指数)。为了计算BMI，该程序以英寸的方式指出用户的身高(1英尺为12英寸)，
//并将以英寸为单位的身高转换为以米为单位的身高(1英寸=0.0254米)。然后，将以磅为单位的体重转换为以千克为单
//位的体重(1千克=2.2磅)。最后，计算相应的BMI-----体重(千克)除以身高(米)的平方。用符号常量表示各种转换因子
//int main(void)
//{
//	using namespace std;
//
//	const int H_convert_i = 12;	//身高从英尺转化为英寸
//	const double W_convert = 2.2;	//体重转换
//	const double H_convert_m = 0.0254;	//身高从英寸转换为m
//	int foot, inch, pound;	//英尺，英寸，磅
//
//	cout << "请以几英寸几英寸的方式输入您的身高,并以磅为单位输入体重:" << endl;
//	cout << "英尺: ";
//	cin >> foot;
//	cout << "英寸: ";
//	cin >> inch;
//	cout << "体重: ";
//	cin >> pound;
//
//	int height = foot * H_convert_i + inch;	//以英寸为单位的身高
//	double weight = pound / W_convert;	//以kg为单位的体重
//	cout << "你的身高是 " << height << " 英寸" << endl;
//	cout << "你的体重是 " << weight << " 千克" << endl;
//
//	double height_m = height * H_convert_m;	//以m为单位的身高
//	cout << "BMI = " << weight / (height_m * height_m) << endl;;
//
//
//	return 0;
//}

//编写一个小程序，要求用户使用一个整数指出自己的身高(单位为英寸)，然后将身高转换为英尺和英寸。该程序使用
//下划线字符来指示输入位置。另外，使用一个const符号常量来表示转换因子。
//int main(void)
//{
//	using namespace std;
//
//	const int convert = 12;
//	int height;	//身高
//
//	cout << "请输入一个整数来表示身高(单位为英寸):__\b\b";
//	cin >> height;
//	//1英尺等于12英寸
//	cout << height << " 英寸 = " << height / convert << " 英尺 + " << height % convert << "英寸" << endl;
//
//	return 0;
//}

//int main(void)
//{
//	using namespace std;
//
//	int auks, bats, coots;
//	
//	auks = 19.99 + 11.99;
//
//	bats = (int)19.99 + (int)11.99;
//	coots = int(19.99) + int(11.99);
//	cout << "auks = " << auks << ", bats = " << bats;
//	cout << ", coots = " << coots << endl;
//
//	char ch = 'Z';
//	cout << "The code for " << ch << " is ";
//	cout << int(ch) << endl;
//	cout << "Yes, the code is ";
//	cout << static_cast<int>(ch) << endl;
//
//	return 0;
//}

//type changes on initiaization
//int main(void)
//{
//	using namespace std;
//
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//
//	float tree = 3;
//	int guess(3.9832);
//	int debt = 7.2E12;
//
//	cout << "tree = " << tree << endl;
//	cout << "guess = " << guess << endl;
//	cout << "debt = " << debt << endl;
//
//	return 0;
//}