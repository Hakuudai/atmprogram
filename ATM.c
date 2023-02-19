printf("\n1. Balance Inquiry\t2.Cash Withdrawl\n3. Fast
Withdrawl\t4.Account Info\n");
printf("\nSelect Your ATM Service: ");
scanf("%d",&n);
long long int b=6200000;
if(n==1)
{
printf("\n\n\t ...NIC BALANCE INQUIRY...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\tAccount no. : C10305210099\n");
printf("\tAVAL. Balance : %d",b);
printf("\n\tACC. Balance : Rs.%d",b+1000);
printf("\n\t THANK YOU FOR BANKING\n\t\t WITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(n==2)
{
long long int d,c;
printf("\n\n\t ...NIC CASH WITHDRAWL...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\nEnter The Amount You Want To Withdraw :Rs.");
scanf("%d",&c);
if(c>b)
{
printf("\nSORRY, Insufficient Balance\n\n");
printf("..................................................................\n");
}
else if(c>25000)
{
printf("\nValue limit Overcrossed!!! Transaction upto
Rs.25,000 only...\n\n");
printf("..................................................................\n");
}
else if(c % 500==0)
{
printf("\nDeducted amount:Rs.%d",c);
d=b-c;
printf("\nTransaction Has Been Done...");
printf("\nNew Balance :Rs.%d",d);
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(c%500!=0)
{
printf("\nInvalid!!! The Value Should Be Multiple Of 500\n\n");
printf("..................................................................\n\n\n");
}
}
else if(n==3)
{
int ee, ff, gg, hh, ii;
printf("\n\n\t ...NIC FAST CASH WITHDRAWL...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\nChoose The Given Amount Below...\n1.
Rs.5,000\t\t2. Rs.10,000\n3. Rs.20,000\t\t4. Rs.25,000\n");
printf("Select No : ");
scanf("%d",&ee);
printf("\n\n");
if(ee==1)
{
int aa=5000;
printf("\nDeducted amount:Rs.%d",aa);
ff=b-aa;
printf("\nNew Balance :Rs.%d",ff);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==2)
{
int bb=10000;
printf("\nDeducted amount:Rs.%d",bb);
gg=b-bb;
printf("\nNew Balance :Rs.%d",gg);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==3)
{
int cc=15000;
printf("\nDeducted amount:Rs.%d",cc);
hh=b-cc;
printf("\nNew Balance :Rs.%d",hh);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==4)
{
int dd=25000;
printf("\nDeducted amount:Rs.%d",dd);
ii=b-dd;
printf("\nNew Balance :Rs.%d",ii);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else
{
printf("Inavalid Input!!!\n\n");
printf("..................................................................\n\n\n");
}
}
else if(n==4)
{
printf("\n\n\t ...Your NIC ACCOUNT DETAILS...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\n\n\t ...NIC BALANCE INQUIRY...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\n\tACC. Holder : RABINDRA TAMANG\n");
printf("\tAccount no. : C10305210099\n");
printf("\tAccount Type : Saving\n");
printf("\tOpened Date : 2014/05/01\n");
printf("\tServices : ATM Banking,\tMobile Banking,\t Debit
Card,\t Cheque\n");
printf("\tPhone No. : 9860882993\n");
printf("\tMail Id : bindra331@gmail.com\n");
printf("\tACC. Balance : Rs.%d\n",b+1000);
printf("\n\t THANK YOU FOR BANKING\n\t\t WITH
US\n\n");
printf("..................................................................\n\n\n");
}
else{
printf("\n\t...Invalid Input!!!...\n\n\n");
}
}
else
{
printf("\n\n\t\t*************************");
printf("\n\t\t***WRONG SECURITY CODE***");
printf("\n\t\t*************************\n\n");
}
}
//SAM POUDEL
else if(strcmp(f,"SAM")==0 && strcmp(l,"POUDEL")==0)
{
printf("\n...SAM POUDEL, Welcome to the NIC BANK ATM SERVICE...\n");
printf("Enter Your Security Code: ");
scanf("%d",&a);
if(a==3057)
{
printf("\n1. Balance Inquiry\t2.Cash Withdrawl\n3. Fast
Withdrawl\t4.Account Info\n");
printf("\nSelect Your ATM Service: ");
scanf("%d",&n);
long long int b=8235632;
if(n==1)
{
printf("\n\n\t ...NIC BALANCE INQUIRY...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\tAccount no. : C10305210101\n");
printf("\tAVAL. Balance : %d",b);
printf("\n\tACC. Balance : Rs.%d",b+1000);
printf("\n\t THANK YOU FOR BANKING\n\t\t WITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(n==2)
{
long long int d,c;
printf("\n\n\t ...NIC CASH WITHDRAWL...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\nEnter The Amount You Want To Withdraw :Rs.");
scanf("%d",&c);
if(c>b)
{
printf("\nSORRY, Insufficient Balance\n\n");
printf("..................................................................\n");
}
else if(c>25000)
{
printf("\nValue limit Overcrossed!!! Transaction upto
Rs.25,000 only...\n\n");
printf("..................................................................\n");
}
else if(c % 500==0)
{
printf("\nDeducted amount:Rs.%d",c);
d=b-c;
printf("\nTransaction Has Been Done...");
printf("\nNew Balance :Rs.%d",d);
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(c%500!=0)
{
printf("\nInvalid!!! The Value Should Be Multiple Of 500\n\n");
printf("..................................................................\n\n\n");
}
}
else if(n==3)
{
int ee, ff, gg, hh, ii;
printf("\n\n\t ...NIC FAST CASH WITHDRAWL...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\nChoose The Given Amount Below...\n1.
Rs.5,000\t\t2. Rs.10,000\n3. Rs.20,000\t\t4. Rs.25,000\n");
printf("Select No : ");
scanf("%d",&ee);
printf("\n\n");
if(ee==1)
{
int aa=5000;
printf("\nDeducted amount:Rs.%d",aa);
ff=b-aa;
printf("\nNew Balance :Rs.%d",ff);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==2)
{
int bb=10000;
printf("\nDeducted amount:Rs.%d",bb);
gg=b-bb;
printf("\nNew Balance :Rs.%d",gg);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==3)
{
int cc=15000;
printf("\nDeducted amount:Rs.%d",cc);
hh=b-cc;
printf("\nNew Balance :Rs.%d",hh);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==4)
{
int dd=25000;
printf("\nDeducted amount:Rs.%d",dd);
ii=b-dd;
printf("\nNew Balance :Rs.%d",ii);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else
{
}
}printf("\n1. Balance Inquiry\t2.Cash Withdrawl\n3. Fast
Withdrawl\t4.Account Info\n");
printf("\nSelect Your ATM Service: ");
scanf("%d",&n);
long long int b=6200000;
if(n==1)
{
printf("\n\n\t ...NIC BALANCE INQUIRY...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\tAccount no. : C10305210099\n");
printf("\tAVAL. Balance : %d",b);
printf("\n\tACC. Balance : Rs.%d",b+1000);
printf("\n\t THANK YOU FOR BANKING\n\t\t WITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(n==2)
{
long long int d,c;
printf("\n\n\t ...NIC CASH WITHDRAWL...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\nEnter The Amount You Want To Withdraw :Rs.");
scanf("%d",&c);
if(c>b)
{
printf("\nSORRY, Insufficient Balance\n\n");
printf("..................................................................\n");
}
else if(c>25000)
{
printf("\nValue limit Overcrossed!!! Transaction upto
Rs.25,000 only...\n\n");
printf("..................................................................\n");
}
else if(c % 500==0)
{
printf("\nDeducted amount:Rs.%d",c);
d=b-c;
printf("\nTransaction Has Been Done...");
printf("\nNew Balance :Rs.%d",d);
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(c%500!=0)
{
printf("\nInvalid!!! The Value Should Be Multiple Of 500\n\n");
printf("..................................................................\n\n\n");
}
}
else if(n==3)
{
int ee, ff, gg, hh, ii;
printf("\n\n\t ...NIC FAST CASH WITHDRAWL...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\nChoose The Given Amount Below...\n1.
Rs.5,000\t\t2. Rs.10,000\n3. Rs.20,000\t\t4. Rs.25,000\n");
printf("Select No : ");
scanf("%d",&ee);
printf("\n\n");
if(ee==1)
{
int aa=5000;
printf("\nDeducted amount:Rs.%d",aa);
ff=b-aa;
printf("\nNew Balance :Rs.%d",ff);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==2)
{
int bb=10000;
printf("\nDeducted amount:Rs.%d",bb);
gg=b-bb;
printf("\nNew Balance :Rs.%d",gg);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==3)
{
int cc=15000;
printf("\nDeducted amount:Rs.%d",cc);
hh=b-cc;
printf("\nNew Balance :Rs.%d",hh);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==4)
{
int dd=25000;
printf("\nDeducted amount:Rs.%d",dd);
ii=b-dd;
printf("\nNew Balance :Rs.%d",ii);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else
{
printf("Inavalid Input!!!\n\n");
printf("..................................................................\n\n\n");
}
}
else if(n==4)
{
printf("\n\n\t ...Your NIC ACCOUNT DETAILS...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\n\n\t ...NIC BALANCE INQUIRY...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\n\tACC. Holder : RABINDRA TAMANG\n");
printf("\tAccount no. : C10305210099\n");
printf("\tAccount Type : Saving\n");
printf("\tOpened Date : 2014/05/01\n");
printf("\tServices : ATM Banking,\tMobile Banking,\t Debit
Card,\t Cheque\n");
printf("\tPhone No. : 9860882993\n");
printf("\tMail Id : bindra331@gmail.com\n");
printf("\tACC. Balance : Rs.%d\n",b+1000);
printf("\n\t THANK YOU FOR BANKING\n\t\t WITH
US\n\n");
printf("..................................................................\n\n\n");
}
else{
printf("\n\t...Invalid Input!!!...\n\n\n");
}
}
else
{
printf("\n\n\t\t*************************");
printf("\n\t\t***WRONG SECURITY CODE***");
printf("\n\t\t*************************\n\n");
}
}
//SAM POUDEL
else if(strcmp(f,"SAM")==0 && strcmp(l,"POUDEL")==0)
{
printf("\n...SAM POUDEL, Welcome to the NIC BANK ATM SERVICE...\n");
printf("Enter Your Security Code: ");
scanf("%d",&a);
if(a==3057)
{
printf("\n1. Balance Inquiry\t2.Cash Withdrawl\n3. Fast
Withdrawl\t4.Account Info\n");
printf("\nSelect Your ATM Service: ");
scanf("%d",&n);
long long int b=8235632;
if(n==1)
{
printf("\n\n\t ...NIC BALANCE INQUIRY...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\tAccount no. : C10305210101\n");
printf("\tAVAL. Balance : %d",b);
printf("\n\tACC. Balance : Rs.%d",b+1000);
printf("\n\t THANK YOU FOR BANKING\n\t\t WITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(n==2)
{
long long int d,c;
printf("\n\n\t ...NIC CASH WITHDRAWL...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\nEnter The Amount You Want To Withdraw :Rs.");
scanf("%d",&c);
if(c>b)
{
printf("\nSORRY, Insufficient Balance\n\n");
printf("..................................................................\n");
}
else if(c>25000)
{
printf("\nValue limit Overcrossed!!! Transaction upto
Rs.25,000 only...\n\n");
printf("..................................................................\n");
}
else if(c % 500==0)
{
printf("\nDeducted amount:Rs.%d",c);
d=b-c;
printf("\nTransaction Has Been Done...");
printf("\nNew Balance :Rs.%d",d);
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(c%500!=0)
{
printf("\nInvalid!!! The Value Should Be Multiple Of 500\n\n");
printf("..................................................................\n\n\n");
}
}
else if(n==3)
{
int ee, ff, gg, hh, ii;
printf("\n\n\t ...NIC FAST CASH WITHDRAWL...\n\n");
printf("\tDate/Time : %s", ctime(&tm));
printf("\nChoose The Given Amount Below...\n1.
Rs.5,000\t\t2. Rs.10,000\n3. Rs.20,000\t\t4. Rs.25,000\n");
printf("Select No : ");
scanf("%d",&ee);
printf("\n\n");
if(ee==1)
{
int aa=5000;
printf("\nDeducted amount:Rs.%d",aa);
ff=b-aa;
printf("\nNew Balance :Rs.%d",ff);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==2)
{
int bb=10000;
printf("\nDeducted amount:Rs.%d",bb);
gg=b-bb;
printf("\nNew Balance :Rs.%d",gg);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==3)
{
int cc=15000;
printf("\nDeducted amount:Rs.%d",cc);
hh=b-cc;
printf("\nNew Balance :Rs.%d",hh);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else if(ee==4)
{
int dd=25000;
printf("\nDeducted amount:Rs.%d",dd);
ii=b-dd;
printf("\nNew Balance :Rs.%d",ii);
printf("\nTransaction Has Been Done Successfully...");
printf("\n\n\n\t THANK YOU FOR BANKING\n\t\tWITH
US\n\n");
printf("..................................................................\n\n\n");
}
else
{
}
}
}
}
else
{
printf("\n\n\t...!!!NOT REGISTERD!!!...");
printf("\n\n\n");
printf("..................................................................\n");
}
