#include <stdio.h>
int main()
{
 int img[256][256];//�洢ͼ������� 
 int a[256]={0};//ͳ�ƻҶ�Ƶ�ε�����     �����ʼ�������� 
 int m,n,i,j;
 scanf("%d %d",&m,&n);//����ͼ��Ĵ�С 
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&img[i][j]);//�������صĻҶ�ֵ 
   a[img[i][j]]++;//��ÿ���ҶȽ���ͳ�� 
  }
 }
 for(i=0;i<256;i++)
 {
  if(a[i]!=0) 
   printf("%d %d\n",i,a[i]);
 }
 return 0;
 } 
