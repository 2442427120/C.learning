#include <iostream>

//��дһ������Ҫ���û���ŷ�޷�����������ĺ�������ÿ100�������ĵ�����������������Ȼ����ת��Ϊ������
//��ĺ�����---ÿ���ض���Ӣ�ע��,����ʹ�ò�ͬ�ĵ�λ�����⣬��������������/ȼ�ϣ���ŷ�޷�����ȼ��/�ࣩ
//�෴��100�������62.14Ӣ�1���ص���3.785������ˣ�19mpg��Լ��12.4L/100km��27mpg��Լ��8.7L/100km
int main(void)
{
	using namespace std;

	const double Kilometer_to_mile = 62.14;	//ÿ100�������32.14Ӣ��
	const double Gallon_to_liter = 3.785;	//ÿ1���ص���3.785��

	double gasoline;	//�û������ÿ�ٹ��������
	double mpg;	//ÿ�������ܶ���Ӣ��

	cout << "������100���������ĺ������������� ";
	cin >> gasoline;

	mpg = Kilometer_to_mile / (gasoline / Gallon_to_liter);
	cout << "ÿ������������ " << mpg << " Ӣ��" << endl;

	return 0;
}

//��дһ������Ҫ���û������������(Ӣ��)��ʹ��������(����)��Ȼ��ָ������������Ϊһ���ص���̡����Ը��
//��Ҳ�����ó���Ҫ���û��Թ���Ϊ��λ������룬������Ϊ��λ������������Ȼ��ָ��ŷ�޷��Ľ��---��ÿ100��
//��ĺ�����(��)��
//int main(void)
//{
//	using namespace std;
//
//	int kilometer, gasoline;	//�������������
//
//	cout << "��������������̣���λΪ�����";
//	cin >> kilometer;
//	cout << "������������������Ϊ��λ��: ";
//	cin >> gasoline;
//
//	cout << "ÿ100���������Ϊ�� " << (double)gasoline / (double)kilometer * 100 << endl; 
//
//	return 0;
//}

//��дһ������Ҫ���û�����ȫ��ǰ�˿ں�������ǰ���˿�(���������ҵ��˿�)������Щ��Ϣ�洢��long long��
//���У����ó�����ʾ����(����������)���˿�ռȫ���˿ڵİٷֱȡ��ó�������Ӧ���������ƣ�
//Enter the world's population: 6898758899
//Enter the population of the US: 310783781
//The population of the US is 4.50492% of the world popuation.
//int main(void)
//{
//	using namespace std;
//
//	long long world_population, US_population;	//�����˿ڣ������˿�
//	double percentage;	//�����˿�ռȫ���˿ڰٷֱ�
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

//��дһ������Ҫ���û���������ʽ��������(ʹ��long��long long �����洢)��Ȼ�����졢Сʱ�����Ӻ���ķ�ʽ
//��ʾ���ʱ�䡣ʹ�÷��ų�������ʾÿ���ж���Сʱ��ÿСʱ�ж��ٷ����Լ�ÿ�����ж����롣�ó��������Ӧ����
//�������ƣ�
//Enter the number of seconds: 31600000
//31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
//int main(void)
//{
//	using namespace std;
//
//	const int Day_to_hours = 24;	//1�����24Сʱ
//	const int Hours_to_minutes = 60;	//1Сʱ����60����
//	const int Minutes_to_seconds = 60;	//1���ӵ���60��
//
//	//�û����������
//	long total_seconds;
//	//�õ���������Сʱ�����ӡ���
//	int days, hours, minutes, seconds;
//
//	cout << "Enter the number of seconds: ";
//	cin >> total_seconds;
//
//	days = total_seconds / Minutes_to_seconds / Hours_to_minutes / Day_to_hours;
//	//��ת��ΪСʱ�����õõ���Сʱ%24�õ�ʣ���Сʱ��
//	hours = (total_seconds / Minutes_to_seconds / Hours_to_minutes) % Day_to_hours;
//	//��ת��Ϊ���ӣ����õõ��ķ���%60�õ����µķ�����
//	minutes = (total_seconds / Minutes_to_seconds) % Hours_to_minutes;
//	//��%60�õ����µ�����
//	seconds = total_seconds % Minutes_to_seconds;
//
//	cout << total_seconds << " seconds = " << days << " days, " << hours << " hours, ";
//	cout << minutes << " minutes, " << seconds << " seconds" <<endl;
//
//	return 0;
//}

//��дһ������Ҫ���û��Զȡ��֡���ķ�ʽ����һ��ά�ȣ�Ȼ���Զ�Ϊ��λ��ʾ��ά�ȡ�1��Ϊ60�֣�1�ֵ���60�룬
//���Է��ų����ķ�ʽ��ʾ��Щֵ������ÿ������ֵ��Ӧʹ��һ�������ı����洢����
//�����Ǹó�������ʱ�������
//Enter the latitude in degress, minutes,and seconds:
//First, enter the degress: 37
//Next, enter the minutes of arc: 51
//Finally, enter the seconds of arc: 19
//37 degress, 51 minutes, 19 seconds = 37.8553 degress
//#define DEGRESS_TO_MINUTES 60	//1�ȵ���60��
//#define MINUTES_TO_SECONDS 60	//1�ֵ���60��
//
//int main(void)
//{
//	using namespace std;
//
//	int degress, minutes, seconds;	//�ȣ��֣���
//	double latitude;	//ά��
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


//��дһ��С����Ҫ���Լ�Ӣ�߼�Ӣ��ķ�ʽ��������ߣ����԰�Ϊ��λ���������ء�(ʹ��3���������洢��Щ��Ϣ)
//�ó��򱨸�BMI(Body Mass Index, ����ָ��)��Ϊ�˼���BMI���ó�����Ӣ��ķ�ʽָ���û������(1Ӣ��Ϊ12Ӣ��)��
//������Ӣ��Ϊ��λ�����ת��Ϊ����Ϊ��λ�����(1Ӣ��=0.0254��)��Ȼ�󣬽��԰�Ϊ��λ������ת��Ϊ��ǧ��Ϊ��
//λ������(1ǧ��=2.2��)����󣬼�����Ӧ��BMI-----����(ǧ��)�������(��)��ƽ�����÷��ų�����ʾ����ת������
//int main(void)
//{
//	using namespace std;
//
//	const int H_convert_i = 12;	//��ߴ�Ӣ��ת��ΪӢ��
//	const double W_convert = 2.2;	//����ת��
//	const double H_convert_m = 0.0254;	//��ߴ�Ӣ��ת��Ϊm
//	int foot, inch, pound;	//Ӣ�ߣ�Ӣ�磬��
//
//	cout << "���Լ�Ӣ�缸Ӣ��ķ�ʽ�����������,���԰�Ϊ��λ��������:" << endl;
//	cout << "Ӣ��: ";
//	cin >> foot;
//	cout << "Ӣ��: ";
//	cin >> inch;
//	cout << "����: ";
//	cin >> pound;
//
//	int height = foot * H_convert_i + inch;	//��Ӣ��Ϊ��λ�����
//	double weight = pound / W_convert;	//��kgΪ��λ������
//	cout << "�������� " << height << " Ӣ��" << endl;
//	cout << "��������� " << weight << " ǧ��" << endl;
//
//	double height_m = height * H_convert_m;	//��mΪ��λ�����
//	cout << "BMI = " << weight / (height_m * height_m) << endl;;
//
//
//	return 0;
//}

//��дһ��С����Ҫ���û�ʹ��һ������ָ���Լ������(��λΪӢ��)��Ȼ�����ת��ΪӢ�ߺ�Ӣ�硣�ó���ʹ��
//�»����ַ���ָʾ����λ�á����⣬ʹ��һ��const���ų�������ʾת�����ӡ�
//int main(void)
//{
//	using namespace std;
//
//	const int convert = 12;
//	int height;	//���
//
//	cout << "������һ����������ʾ���(��λΪӢ��):__\b\b";
//	cin >> height;
//	//1Ӣ�ߵ���12Ӣ��
//	cout << height << " Ӣ�� = " << height / convert << " Ӣ�� + " << height % convert << "Ӣ��" << endl;
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