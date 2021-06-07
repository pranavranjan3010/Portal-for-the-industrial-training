https:https://github.com/pranavranjan3010/Portal-for-the-industrial-training.git
//C++ PROJECT PORTAL FOR THE INDUSTRIAL TRAINING  //

#include<stdio.h>
#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
main()


{
	int choice,n,choose,interest;
	char name[90],confirm[90];
	
	float p,p1;
	
	cout<<"-----------------------------------------------------------------------------------------------------------------------------";
	cout<<"\n****WELCOME TO THE INDUSTRIAL TRAINING******(NIIT)********";
	cout<<"\n-----------------------------------------------------------------------------------------------------------------------------";
	do
	{
	
	
	
	cout<<"\n1.LOGIN\n2.COURSES AVAILABLE\n3.ABOUT NIIT\n4.AREA OF INTEREST\n5.DISCOUNT OFFERS";
    cout<<"\nEnter the choice\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"*!!WELCOME TO THE LOGIN SECTION!!*";
			cout<<"\nEnter your user name\n";
			cin>>name;
			cout<<"\nEnter your password\n";
			cin>>n;
			cout<<"\nEnter your verification otp\n";
			cin>>n;
			cout<<"\nLOADING..................";
			cout<<"\nYOU HAVE SUCCESSFULLY LOGIN!!";
			cout<<"\n=========================================================================================================================";
			break;
			case 2:
		    cout<<"========================================================================================================================";
			cout<<"*!!COURSES AVAILABLE*!!";
			cout<<"\n1.C FOR BEGINEERS\n2.C++\n3.JAVA ADVANCED\n4.JAVA CORE\n5.HTML";
			cout<<"\n======================================================================================================================";
			cout<<"\nEnter your choice\n";
			cin>>choose;
			switch(choose)
			{
				case 1: 
				cout<<"=====================================================================================================================";
				cout<<"!!C for the begineers\n!!";
				cout<<"\n*COURSE DETAILS*";
				cout<<"\nCourse price"<<"="<<"RS 4000"<<endl;
				cout<<"\nCourse duration"<<"="<<"5 weeks"<<endl;
				cout<<"\n!!APPLY COUPON TO GET THE DISCOUNT!!";
				cout<<"\n!!choose the other option to get information about the other courses\n!!";
				cout<<"=====================================================================================================================";
				break;
				case 2:
					cout<<"=================================================================================================================";
				cout<<"!!C++ for the begineers\n!!";
				cout<<"\n*COURSE DETAILS*";
				cout<<"\nCourse price"<<"="<<"RS 5000"<<endl;
				cout<<"\nCourse duration"<<"="<<"5 weeks"<<endl;
				cout<<"\n!!APPLY COUPON TO GET THE DISCOUNT!!";
				cout<<"\n!!choose the other option to get information about the other courses\n!!";
				cout<<"=====================================================================================================================";
				break;
				
					case 3:
				cout<<"======================================================================================================================";
				cout<<"\nJAVA ADVANCED!!";
				cout<<"\n*COURSE DETAILS*";
				cout<<"\nCourse price"<<"="<<"RS 6000"<<endl;
				cout<<"\nCourse duration"<<"="<<"6 weeks"<<endl;
				cout<<"\n!!APPLY COUPON TO GET THE DISCOUNT!!";
				cout<<"\n!!choose the other option to get information about the other courses\n!!";
				cout<<"=====================================================================================================================";
				break;
				case 4:
				cout<<"======================================================================================================================";
				cout<<"\nJAVA CORE!!";
				cout<<"\n*COURSE DETAILS*";
				cout<<"\nCourse price"<<"="<<"RS 5500"<<endl;
				cout<<"\nCourse duration"<<"="<<"5 weeks"<<endl;
				cout<<"\n!!APPLY COUPON TO GET THE DISCOUNT!!";
				cout<<"\n!!choose the other option to get information about the other courses\n!!";
				cout<<"=====================================================================================================================";
				break;
				case 5:
				cout<<"======================================================================================================================";
				cout<<"\nHTML!!";
				cout<<"\n*COURSE DETAILS*";
				cout<<"\nCourse price"<<"="<<"RS 3500"<<endl;
				cout<<"\nCourse duration"<<"="<<"4 weeks"<<endl;
				cout<<"\n!!APPLY COUPON TO GET THE DISCOUNT!!";
				cout<<"\n!!choose the other option to get information about the other courses\n!!";
				cout<<"=====================================================================================================================";
				break;
				default:
					cout<<"\n---------------------------------------------------";
					cout<<"\n!!Choose the valid option for the course details!!";
					cout<<"\n----------------------------------------------------";
				break;
			}
				case 3:
					cout<<"!!ABOUT NIIT!!";
					cout<<"\n********************************";
					cout<<"!!\nNATIONAL INSTITUTE OF INDUSTRAIL TRAINING,EXCLUSIVELY DESIGNED BY THE EDUCATORS FOR THE EDUCATORS.\nCERTIFICATE OF THE REGISTRATION UNDER SECTION 60 OF GOVT. OF INDIA \nAND RULE NO. 69 GOVT OF WEST BENGAL INSPIRED BY NATIONAL TASK FORCE ON IT AND GOVT OF INDIA!!";
				    cout<<"\n**********************************";
					break;
					case 4:
						cout<<"!!AREA OF INTEREST\n!!";
						cout<<"Enter your field of interest\n";
						cout<<"!!!!!!******!!!!!!!!!!!!*****!!!!!!!!!!!!!!!!!****";
						cout<<"\n1.ANDROID DEVELOPMENT\n2.FULL STACK DEVELOPMENT\n3.HACKING\n4.WEBSITE DEVELOPMENT\n5.DATA SCIENCE\n";
						cout<<"!!!!!******!!!!!!!!!!!!!*******!!!!!!!!!!!!*****\n";
						cin>>interest;
						switch(interest)
						{
							case 1:
								cout<<"!!You must have command over all these!!";
								cout<<"\n======================================================================================================";
								cout<<"\n1.Java\n2.Flutter\n3.kotlin\n4.Android Studio";
								cout<<"\n=======================================================================================================";
								break;
								case 2 :
								cout<<"!!You must have command over all these!!";
								cout<<"\n======================================================================================================";
								cout<<"\n1.Html \n2.Css\n3.Angular Js\n4.Node Js\n5.MongoDB";
								cout<<"\n=======================================================================================================";
								break;
								case 3:
								cout<<"!!You must have command over all these!!";
								cout<<"\n======================================================================================================";
								cout<<"\n1.Java Script \n2.Ruby\n3.Php\n4.Sql\n5.Perl";
								cout<<"\n=======================================================================================================";
								break;
								case 4:
								cout<<"!!You must have command over all these!!";
								cout<<"\n======================================================================================================";
								cout<<"\n1.Python \n2.Html\n3.Css\n4.Sql\n5.Java Script";
								cout<<"\n=======================================================================================================";
								break;
								case 5:
								cout<<"!!You must have command over all these!!";
								cout<<"\n======================================================================================================";
								cout<<"\n1.Python\n2.Julia\n3.Java Script\n4.Sql\n5.Scala";
								cout<<"\n=======================================================================================================";
								break;
								default:
									cout<<"\n!!Choose the valid option!!";
									break;
						}
						case 5:
							cout<<"\n************************************";
							cout<<"\nDISCOUNT OFFERS\n";
							cout<<"\n**************************************";
							cout<<"\nEnter the course name\n";
						    cin>>name;
							cout<<"\nAPPLY COUPON TO GET THE DISCOUNT OF 40%..................(code-harry@123)";
							cout<<"\nEnter the code\n";
							cin>>name;
								
							cout<<"\nEnter the course fee\n";
							cin>>p;	
						
							
								p1=p-500;
								cout<<"After discount fee"<<"="<<" RS "<< p1 <<endl;
								
									
									cout<<"!!Thanks for the visiting!!";
						
								cout<<"\n--------------------------------------------------------------------------------------------";
								break;
						}
						}while(choice!=5);
						
			}
