//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n,len=0,i,j;
//    char a;
//    scanf("%d %c",&n,&a);
//    char arr[n+1];
//    char* tmp=(char*)malloc(sizeof(char));
//    getchar();
//    while(scanf("%c",&tmp[len])&&tmp[len]!='\n')
//    {
//        len++;
//        tmp=(char*)realloc(tmp,len+1);
//    }
//    tmp[len]='\0';
//    if(len>=n)
//    {
//        for(i=len-n,j=0;i<=len;i++,j++)
//        {
//            arr[j]=tmp[i];
//        }
//    }
//    else
//    {
//        for(i=0;i<n-len;i++)
//        {
//            arr[i]=a;
//        }
//        while(*tmp)
//        {
//            arr[i]=*tmp;
//            tmp++;
//            i++;
//        }
//    }
//    printf("%s",arr);
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int panhui(char*p)
//{
//    int r=strlen(p);
//    int l=0;
//    while(l<r)
//    {
//        if(p[l]!=p[r-1])
//            return 0;
//        l++;
//        r--;
//    }
//    return 1;
//}
//int pan(char *p,int len)
//{
//    int i=0,j;
//    char* tmp;
//    while(i<=len)
//    {
//        tmp=(char*)malloc(len+1+i);
//        for(j=0;j<i;j++)
//        {
//            tmp[j]='0';
//        }
//        tmp[j]='\0';
//        tmp=strcat(tmp,p);
//        if(panhui(tmp))
//            return 1;
//        i++;
//        free(tmp);
//    }
//    return 0;
//}
//int main()
//{
//    int len=0;
//    char*tmp=(char*)malloc(1);
//    while(scanf("%c",&tmp[len])&&tmp[len]!='\n')
//    {
//        len++;
//        tmp=(char*)realloc(tmp,len+1);
//    }
//    tmp[len]='\0';
//    if(pan(tmp,len))
//    {
//        printf("YES");
//    }
//    else
//        printf("NO");
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int pan(char* s)
//{
//	int len = strlen(s);
//	int i = 0;
//	int j = len - 1;
//	int flag = 1;
//	while (j > i)
//	{
//		if (s[i] != s[j])
//		{
//			flag = 0;
//			break;
//		}
//		i++; j--;
//	}
//	return flag;
//}
//int main()
//{
//
//	char b[100];
//	char a[100];
//	scanf("%s", b);
//	if (pan(b) == 1)
//	{
//		printf("YES");
//		return 0;
//	}
//	strcpy(a, b);
//	int cnt = 0;
//	while (pan(a) == 0)
//	{
//	    strcpy(b,a);
//		int i;
//		cnt++;
//		int x = strlen(a);
//		a[1]='0';
//		for (i=0; i < x+1; i++)
//		{
//		   if(i==0)a[0] = '0';
//		   a[i + 1] = b[i];
//		}
//		if (pan(a) == 1)
//		{
//			printf("YES");
//			break;
//		}
//		else if (cnt == x && pan(a) != 1)
//		{
//			printf("NO");
//			break;
//		}
//
//
//	}
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//    int year,tmp,x,count,arr[10],i,cy=0;
//    scanf("%d %d",&year,&x);
//    while(1)
//    {
//        tmp=year;
//        count=0;
//        for(i=0;i<10;i++)6
+
//        {
//            arr[i]=0;
//        }
//        if(year<1000)
//        {
//            arr[0]=1;
//        }
//        for(;tmp;)
//        {
//            arr[tmp%10]=1;
//            tmp/=10;
//        }
//        for(i=0;i<10;i++)
//        {
//            if(arr[i])
//                count++;
//        }
//        if(count==x)
//            break;
//        cy++;
//        year++;
//    }
//    printf("%d %04d",cy,year);
//    return 0;
//}
