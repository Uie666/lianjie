#include <bits/stdc++.h> // ����ͷ�ļ� 
char list[11][3]={"��","һ","��","��","��","��","��","��","��","��","ʮ"}; 
int swap(char a[]){
    int i;
    for(i=0;i<11;i++){
        if(strcmp(list[i],a)==0){
            return i;
        }
    }
}
int num(char a[]){
    char b[10],c[10];
    if(strlen(a)==2){
        return swap(a); //��һ���ȵ������ֱ�������
    }
    else if(strlen(a)==4){
        b[0]=a[2];
        b[1]=a[3];
        b[2]='\0';      
            if(swap(b)!=10) return 10+swap(b);//ʮһ��ʮ������ʮ��ͷ���������ֱ�������
            else{
                b[0]=a[0];
                b[1]=a[1];
                b[2]='\0';
                return 10*swap(b);//��ʮ����ʮ����ʮ��β������
            }
    
    }
    else if(strlen(a)==6){
        b[0]=a[4];
        b[1]=a[5];
        b[2]='\0';
        c[0]=a[0];
        c[1]=a[1];
        c[2]='\0';
        return swap(b)+swap(c)*10;//����ʮ�������͵�����
    }
}
int judge(int n,char a[],char b[]){
    int sum1;
    sum1=num(b);
    if(strcmp(a,"����")==0) return n+sum1;
    else if(strcmp(a,"����")==0) return n-sum1;
    else if(strcmp(a,"����")==0) return n*sum1;
    else if(strcmp(a,"����")==0) return n/sum1;
}
int main(){
    int i,sum,w,sum2;
    char a[100],b[100],c[100],d[100],e[100],f[100],g[100],h[100],p[100],j[100],k[100],z[100],o[100];
    scanf("%s",a);
    if(!strcmp(a,"����")){
        scanf("%s %s %s",a,b,c);
    }
    else{
        printf("�����ʽ����\n"); 
        return 0;
    }
    sum=num(c);

    while(scanf("%s %s",d,b)!=EOF){
    	if(!strcmp(d,"����")){
    		
		        scanf("%s %s",f,g); 
		        sum2=num(g);
		        
		        scanf("%s",p);
		        if(strcmp(p,"���"))
		        {
				scanf("%s %s",j,k); 
	            
                sum=judge(sum,j,k); 
			   
                if(sum>=99||sum<=0){
                    printf("���������ɷ�Χ\n");
                    return 0;
                }          
				}
			
				
					scanf("%s %s %s %s %s %s %s %s %s %s",b,c,d,e,f,g,h,o,j,z);
					scanf("%s %s",a,b);
					
					
					if(sum>8)
					{sum2=sum2+1; 
					 if(sum2>=0&&sum2<=10){
                    printf("%s\n",list[sum2]);}
                    else{
					
					if(sum2%10==0){
	                printf("%sʮ\n",list[sum2/10]);
	                }
	                else if(sum2<=19){
	                printf("ʮ%s\n",list[sum2%10]);
	                }
	                else {
	                printf("%sʮ%s\n",list[sum2/10],list[sum2%10]);
	                }	}			
					}
					else{printf("��");
					}
					
		} 
 	else{
        if(strcmp(d,"����")){ 
            scanf("%s",c);
       
            if(!strcmp(a,d)){
                sum=judge(sum,b,c);       
                if(sum>=99||sum<=0){
                    printf("���������ɷ�Χ\n");
                    return 0;
                }
            }
            else {printf("������ƥ\n");
                return 0;
            } 
        }
        else{
            if(sum>=0&&sum<=10){
                printf("%s\n",list[sum]);
            }
            else {
                if(sum%10==0){
                    printf("%sʮ\n",list[sum/10]);
                }
                else if(sum<=19){
                    printf("ʮ%s\n",list[sum%10]);
                }
                else {
                    printf("%sʮ%s\n",list[sum/10],list[sum%10]);
                }
            }  
			scanf("%s %s %s %s %s %s %s %s %s %s",a,b,c,d,e,f,g,h,p,j);
		
			if(sum>8)
			{printf("��ã�����");}
			else
			{printf("��������");}
        }}
    }
   
return 0;       
}
