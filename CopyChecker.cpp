#include<stdio.h>
#include<windows.h>
#include<string.h>
int string1(char *ch1,char *ch2);
int string2(char *ch);
int strsub_function(char *ch1,char *ch2);
void swap(char *ch1,char *ch2);

int main()
{
    SetConsoleTitle("Copy Checker by Code Snipers");
    FILE *fp1,*fp2;
    char ch,ch1[100000],ch2[100000],ch3[100000],ch4[100000];
    int a=0,flag1=0,flag2=0,k=0,l=0,i,j,m,n=0,index,index1[1000],b=0;
    float s[1000],sum=0;
    scanf("%s");
    //system("cpptotext.bat");
   // system("ren onoff.cpp onoff.txt");
    fp1=fopen("%s","r");
    scanf("%s");
    //system("cpptext.bat");
    fp2=fopen("%s","r");
    while((ch=fgetc(fp1))!=EOF)
        ch1[a++]=ch;
    ch1[a]='\0';
    a=0;
    while((ch=fgetc(fp2))!=EOF)
        ch2[a++]=ch;
    ch2[a]='\0';
    for(i=0,j=0;ch1[i] && ch2[j];)
    {
        if(ch1[i]=='.' && flag1==0)
        {
            ch3[k++]=' ';
            ch3[k]='\0';
            k=0;
            flag1=1;
        }
        else if(ch2[j]=='.' && flag2==0)
        {
            ch4[l++]=' ';
            ch4[l]='\0';
            l=0;
            flag2=1;
        }
        else if(flag1==1 && flag2==1)
        {
            i++,j++;
            flag1=0,flag2=0;
            int d=string2(ch3),e=string2(ch4);
            if(e>d)
            {
                swap(ch3,ch4);
            }
            m=string1(ch3,ch4);
            index1[b++]=string2(ch3);
            s[n++]=m;
            index=n;
            i++,j++;
        }
        else if(ch1[i]!='.')
            ch3[k++]=ch1[i++];
        else if(ch2[j]!='.')
            ch4[l++]=ch2[j++];
    }
    for(int c=0;c<index;c++)
    {
        s[c]=(s[c]/index1[c])*100;
        sum+=s[c];
    }
    //system("start.bat");
    printf("\n\n\t\t\tMatch Percentage = %0.2f%%\n",sum/index);

    return 0;
}

int string1(char *ch1,char *ch2)
{
    char ch3[1000];
    int count[1000],j=0,k=0,index1,sum=0;
    for(int i=0;i<strlen(ch2);i++)
    {
        if(ch2[i]==' ')
        {
            ch3[j]='\0';
            j=0;
            count[k]=strsub_function(ch1,ch3);
            index1=k;
            sum+=count[k];
            k++;
        }
        else
            ch3[j++]=ch2[i];
    }
    return sum;
}

int string2(char *ch)
{
    int count=0;
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]==' ')
            count++;
    }
    return count;
}

int strsub_function(char *ch1,char *ch2)
{
    int count,len=strlen(ch2);
    for(int i=0;ch1[i];)
    {
        count=0;
        for(int j=0;ch2[j];j++)
        {
            if(ch1[i]==ch2[j])
            {
                count++;
                i++;
            }
            else
            {
                count=0;
                i++;
                break;
            }
        }
        if(count==len)
            return 1;
    }
    return 0;
}

void swap(char *ch1,char *ch2)
{
    char temp[1000];
    strcpy(temp,ch1);
    strcpy(ch1,ch2);
    strcpy(ch2,temp);
}
