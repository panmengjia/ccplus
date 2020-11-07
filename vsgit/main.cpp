#include <iostream>

using namespace std;

int main()
{


	return 0;
}



void testPlusPlus()
{
	//c ++
	//https://blog.csdn.net/bit_part/article/details/81875998?utm_medium=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromMachineLearnPai2-1.add_param_isCf&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromMachineLearnPai2-1.add_param_isCf
	int i = 1;

	int j = ++i + ++i;

	cout << j << endl;
	i = 1;
	j = ++i + ++i + i++;  //先++，内存被改变，然后在取值运算；后++，先取值，再++，运算对象前侧哪怕是低有优先级，但是内存是什么覆盖的呢
	cout << i << endl;  //4  好像等赋值运算符运算完毕再++
	cout << j << endl;  //9
	i = 1;
	j = ++i + ++i + i; 
	cout << i << endl;  //3
	cout << j << endl;  //9
	i = 1;
	j = ++i + ++i + ++i;
	cout << i << endl;  //4 
	cout << j << endl;  //12

	i = 1;
	j = (++i + ++i + i++)*2 + 2;
	cout << i << endl;  //4
	cout << j << endl;  //20

	i = 1;
	j = ++i + ++i + i++ + i++ + i++ + i++;
	cout << i << endl;  //7
	cout << j << endl;  //18

	i = 1;
	j = ++i + ++i + i-- + i-- + i-- + i--; //很神奇
	cout << i << endl;  //-1
	cout << j << endl;  //18
	cout << "---------------------" << endl;
	i = 1;
	j = (++i) + (++i) + (i--) + (i--) + (i--) + (i--); //很神奇
	cout << i << endl;  //-1
	cout << j << endl;  //18
	system("pause");
	
} 

