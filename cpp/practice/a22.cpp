//电视类的应用实例
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class TV {
protected:
    int num;
    char name[10];
    int grade;
    int score;
    int no;
public:
    TV();
    TV(char name1[],int num1,int grade1,int score1,int no1);
    ~TV();
    void scan();
    int setName(char&);
    int setNum(char&);
    int setGrade(char&);
    int getScore();
    char * getName();
    char getNum();
    int  getGrade();
    int getNo();
};


int sort_line(TV aa[]);
int getMax(TV aa[]);
int getMin(TV aa[]);
float getAdv(TV aa[]);
void display(TV aa[]);
TV scan(int n);
int n=0;


TV::TV() {
    num=0;
    strcpy(name,"A");
    grade=0;
    score=0;
    no=0;
}

TV::TV(char name1[],int num1,int grade1,int score1,int no1) {
    num=num1;
    strcpy(name,name1);
    grade=grade1;
    score=score1;
    no=no1;
}

TV::~TV() {
}

int TV::getScore() {
    return score;
}

char* TV::getName() {
    return name;
}
char TV::getNum(){
    return num;
}

int TV::getGrade(){
    return grade;
}
int TV::getNo(){
    return no;
}

TV scan(int n) {          //数据输入过程
    char name[20];
    int num,score,grade;
    n++; printf("请输入第%d台电视机 厂商，编号，等级，价格:\n",n);
    scanf("%s",name);
    scanf("%d%d%d",&num,&grade,&score);
    TV tv(name,num,grade,score,n);
    return tv;
}

int sort_line(TV aa[]) {   //对数据进行冒泡排序
  TV tv;
  for (int i=9;i>0;i--)
  for (int j=0;j<i;j++)
      if(aa[j].getScore()>aa[j+1].getScore())
      {
          //请考生补充三个语句
          tv = aa[j];
          aa[j] = aa[j+1];
          aa[j+1] = tv;
      }
  return 0;
}

int getMax(TV aa[])
{ int i,maxx=0;
  for(i=0;i<10;i++)
      if(aa[i].getGrade() > maxx) maxx=aa[i].getGrade();
  return maxx;
}

int getMin(TV aa[])
{ int i,minx=100;
  for(i=0;i<10;i++)
      if(aa[i].getGrade() < minx) minx=aa[i].getGrade();
  return minx;
}

float getAdv(TV aa[])
{ int i;
  float adv=0;
  for(i=0;i<10;i++)
     adv=adv+aa[i].getScore();
  return adv/10;
}

void display(TV aa[])  //输出数据
{ int i;
  printf("  序号    编号       厂商       等级      价格\n");
  for(i=0;i<10;i++)
      printf("%5d  %5d  %16s   %5d  %5d\n",aa[i].getNo(),aa[i].getNum(),aa[i].getName(),aa[i].getGrade(),aa[i].getScore());
}


int main()
{
   int i;
   TV aa[10];
   for(i=0;i<2;i++) aa[i]=scan(i);
   printf("现在输出电视机的基本情况：\n");
   display(aa);
   printf("最高等级： %5d，  ",getMax(aa));
   printf("最低等级： %5d，  ",getMin(aa));
   printf("平均价格   %6.1f\n",getAdv(aa));
   printf("\n排序后再次输出电视机基本情况：\n");
   sort_line(aa);       //对数据进行排序
   display(aa);
   return 0;
}