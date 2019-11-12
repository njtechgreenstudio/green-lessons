#include<bits/stdc++.h>
using namespace std;

/*放气球

问题描述
小明有一个盒子和n个气球。而且他只想以他选的n个固定的点为气球的球心放置。
他用一个神奇的装置来放气球，首先，他把n个气球放在这n个点上，
然后他可以以他想要的顺序来使气球膨胀，但是他不能使气球停止膨胀，
当且仅当气球碰到盒子的某一面或者之前放的气球时才会停止膨胀，
另外，如果某个点已经被一个气球所包含，那么这个点上的气球将不能膨胀了。

输入
第一行三个整数a b c (a,b,c≤1000)（分别对应x,y,z轴）表示盒子的长宽高。
接下来一行一个整数n(n≤6)表示气球（放置点）个数。
接下来n行，每行是三个整数x_i   y_i   z_i，表示这些点的位置

输出
一个实数，小数点后至少6位，且数字总长度要恰好16，若不足则补前导0。
*/



int main()
{
int a,b,c;//长宽高
int n,i[7],l;//用于排列123456
int x[7],y[7],z[7];//坐标数组
double r[7],d;//半径 间距
double min;//用于判断哪个是半径
double v, allv,maxv=0;//单个球体积 所占体积 最大体积
 
 

 //构建立方体
 cin >> a >> b >> c;
 
 
 //确定坐标组数 
 cin >> n; 

//初始化xyzir
x[0]=0;
y[0]=0;
z[0]=0;
i[0]=0;
r[0]=0;

 //输入n组固定坐标
 for(l=1;l <=n;l++)
    {cin >> x[l] >> y[l] >> z[l]; 
	i[l]=l;}
//枚举开始
do{
l = 1;

//重置所占体积 
allv = 0;
 
while(l <= n)
//计算间距 
    {
	d= sqrt(pow((x[i[l-1]] - x[i[l]]),2)+pow((y[i[l-1]] - y[i[l]]),2)+pow((z[i[l-1]] - z[i[l]]),2)) - r[i[l-1]];
     
//判断半径 
    if(a - x[i[l]] < b - y[i[l]])
        min = a - x[i[l]];
    else
        min = b - y[i[l]];
        
    if(c - z[i[l]] < min)
        min = c - z[i[l]];
        
    if(x[i[l]] < min)  
	    min = x[i[l]]; 
	    
   if(y[i[l]] < min)  
	    min = y[i[l]]; 
	    
	if(z[i[l]] < min)  
	    min = z[i[l]]; 
    
    if(d > 0&& d < min)
        min = d;
         
    if(d <= 0)
        min = 0;
//得到半径 
    r[i[l]]=min;
//计算单个球体积 
    v = ( 4.0 / 3.0 * 3.141592 * pow(r[i[l]],3));
//计算总体积 
    allv += v;
    l++;}
	
//更新最大体积 
if (maxv < allv) 
maxv = allv;
      ;}while(next_permutation(i , i+n+1));//排列终止 



//输出最大体积 
printf("%017.6lf",maxv);
     
//结束 
 return 0;
}

