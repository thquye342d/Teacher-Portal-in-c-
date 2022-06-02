

#include <iostream>


using namespace std;
void tp(){
	int n,m,i,clss,sub,choice2;
	float obmarks,persass,perslp,persmt,persft,gradepers,persCEA;
	float totalass=0;
	float totallp=0;
	string classes[20],name[20],roll[20],subjects[20],marks[20];
	cout<<"\t\t\n\nEnter number of classes you want to enter===> :";
	cin>>n;
	cout<<"\t\t\n\tEnter name of : " << n << " clases below===>:"<<endl;
	for(i=0;i<n;i++){
		cin>>classes[i];
	}
	cout<<"\t\t\t-----*USE INSTRUCTIONS BELOW TO SELECT CLASSES*----"<<endl;
     for(i=0;i<n;i++){
	cout<<"\t\tpress " <<i+1<< "  to chose " <<classes[i]<< " class"<<endl;}
	cin>>clss;

	switch(clss)
	{ 
	case 1:
		{
			cout<<"\t\t\t\n\n --*your selected class is*-- "<<classes[0]<<endl;
			cout<<"\t\t\n\n--select the number of students here==> :";
			cin>>n;
			cout<<"\t\t\n\n**Enter the names of"<<n<<" students "<<endl;
			for(i=0;i<n;i++){
				cout<<"\t\t\n\nname of student "<<i+1<<" is ";
				cin>>name[i];
			    cout<<"\t\t\n\nroll number of student "<<i+1<<" is ";
			    cin>>roll[i];
			    cout<<"******************************"<<endl;
			    cout<<"\t\t\n\n**Enter Merks of student : "<<name[i]<<" having roll number : "<<roll[i]<<" here"<<endl;
			    cout<<"\t\t press1 for lab assesments"<<endl;
			    cout<<"\t\tPress 2 for lab reports"<<endl;
			    cout<<"\t\tPress 3 for Mid terms"<<endl;
		    	cout<<"\t\tPress 4 for CEA"<<endl;
			    cout<<"\t\tPress 5 for Final terms"<<endl;
			    cin>>choice2;
			  switch(choice2)
			 {case 1:
				{
				cout<<"\t\tEnter number of lab assesments here : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"\tEnter marks in lab assesment no "<<i+1<<" : ";
					cin>>obmarks;
					totalass+=obmarks;
				}
				cout<<"\ttotal marks in "<<n<<" assesments are: "<<totalass <<endl;
				persass=totalass*20/100;
				cout<<"\t\toverall persentage of lab assesment is : "<<persass<<endl;
				} 
			  case 2:{
			  	cout<<"\t\tEnter number of weekly Lab reports here==> :";
			  	cin>>n;
			  	for(int i=0;i<n;i++){
			  		cout<<"\tEnter marks in lab report no. :"<<i+1<<" : ";
			  		cin>>obmarks;
			  		totallp+=obmarks;
				  }
				cout<<"\t\ttotal marks in "<<n<<" weekly reports are: "<<totallp <<endl;
				perslp=totallp*15/100;
				cout<<"\t\toverall persentage of lab reportss is : "<<perslp<<endl;
				
			  } 
			  case 3:{
				cout<<"\t\ntEnter mid terms obtained persentage marks here==> :";
				cin>>obmarks;
				persmt=obmarks*15/100;
				cout<<"\t\t\t\noverall midterm persentage in w.r.t 15% of subject is : "<<persmt<<endl;
			  }
			  case 4:{
			  	cout<<"\t\t\nEnter persentage marks in CEA here==> :";
				cin>>obmarks;
				persCEA=obmarks*15/100;
				cout<<"\t\toverall CAE persentage  w.r.t 5% of subject is : "<<persCEA<<endl;
				
			  }
			  case 5:{
				cout<<"Enter Final Terms persentage here :";
				cin>>obmarks;
					persft=obmarks*45/100;
				cout<<"overall  final term persentage w.r.t 45% is : "<<persft<<endl;
			  } 
			  gradepers=persft+persmt+perslp+persass+persCEA;
			  }cout<<"Total persentage marks of the student : " <<name[i]<< " is "<<gradepers<<" % "<<endl;
			  }
			
			}break;
		case 2:{
			cout<<"your selected class is "<<classes[1]<<endl;
			cout<<"select the number of students here :";
			cin>>n;
			cout<<"Enter the names of"<<n<<" students "<<endl;
			for(i=0;i<n;i++){
				cout<<"name of student "<<i+1<<" is ";
				cin>>name[i];
				cout<<"roll number of student "<<i+1<<" is ";
			    cin>>roll[i];
			    cout<<"******************************"<<endl;
			    cout<<"Enter Merks of student : "<<name[i]<<" having roll number : "<<roll[i]<<" here"<<endl;
			    cout<<"Press 1 for lab assesments"<<endl;
			    cout<<"Press 2 for lab reports"<<endl;
			    cout<<"Press 3 for Mid terms"<<endl;
		    	cout<<"Press 4 for CEA"<<endl;
			    cout<<"Press 5 for Final terms"<<endl;
			    cin>>choice2;
			  switch(choice2)
			 {case 1:
				{
				cout<<"Enter number of lab assesments here : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"Enter marks in lab assesment no "<<i+1<<" : ";
					cin>>obmarks;
					totalass+=obmarks;
				}
				cout<<"total marks in "<<n<<" assesments are: "<<totalass <<endl;
				persass=totalass*20/100;
				cout<<"overall persentage of lab assesment is : "<<persass<<endl;
				} 
			  case 2:{
			  	cout<<"Enter number of weekly Lab reports here :";
			  	cin>>n;
			  	for(int i=0;i<n;i++){
			  		cout<<"Enter marks in lab report no. :"<<i+1<<" : ";
			  		cin>>obmarks;
			  		totallp+=obmarks;
				  }
				cout<<"total marks in "<<n<<" weekly reports are: "<<totallp <<endl;
				perslp=totallp*15/100;
				cout<<"overall persentage of lab reportss is : "<<perslp<<endl;
				
			  } 
			  case 3:{
				cout<<"Enter mid terms obtained persentage marks here :";
				cin>>obmarks;
				persmt=obmarks*15/100;
				cout<<"overall midterm persentage in w.r.t 15% of subject is : "<<persmt<<endl;
			  }
			  case 4:{
			  	cout<<"Enter persentage marks in CEA here :";
				cin>>obmarks;
				persCEA=obmarks*15/100;
				cout<<"overall CAE persentage  w.r.t 5% of subject is : "<<persCEA<<endl;
				
			  }
			  case 5:{
				cout<<"Enter Final Terms persentage here :";
				cin>>obmarks;
					persft=obmarks*45/100;
				cout<<"overall  final term persentage w.r.t 45% is : "<<persft<<endl;
			  } 
			  gradepers=persft+persmt+perslp+persass+persCEA;
			  }cout<<"Total persentage marks of the student : " <<name[i]<< " is "<<gradepers<<" % "<<endl;
			  }
			
			}break;
			case 3:
			{
			cout<<"your selected class is "<<classes[2]<<endl;
			cout<<"select the number of students here :";
			cin>>n;
			cout<<"Enter the names of"<< n<<" student "<<endl;
			for(i=0;i<n;i++){
				cout<<"name of student "<<i+1<<" is ";
				cin>>name[i];
				cout<<"roll number of student "<<i+1<<" is ";
			    cin>>roll[i];
			    cout<<"******************************"<<endl;
			    cout<<"Enter Merks of student : "<<name[i]<<" having roll number : "<<roll[i]<<" here"<<endl;
			    cout<<"Press 1 for lab assesments"<<endl;
			    cout<<"Press 2 for lab reports"<<endl;
			    cout<<"Press 3 for Mid terms"<<endl;
		    	cout<<"Press 4 for CEA"<<endl;
			    cout<<"Press 5 for Final terms"<<endl;
			    cin>>choice2;
			  switch(choice2)
			 {case 1:
				{
				cout<<"Enter number of lab assesments here : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"Enter marks in lab assesment no "<<i+1<<" : ";
					cin>>obmarks;
					totalass+=obmarks;
				}
				cout<<"total marks in "<<n<<" assesments are: "<<totalass <<endl;
				persass=totalass*20/100;
				cout<<"overall persentage of lab assesment is : "<<persass<<endl;
				} 
			  case 2:{
			  	cout<<"Enter number of weekly Lab reports here :";
			  	cin>>n;
			  	for(int i=0;i<n;i++){
			  		cout<<"Enter marks in lab report no. :"<<i+1<<" : ";
			  		cin>>obmarks;
			  		totallp+=obmarks;
				  }
				cout<<"total marks in "<<n<<" weekly reports are: "<<totallp <<endl;
				perslp=totallp*15/100;
				cout<<"overall persentage of lab reportss is : "<<perslp<<endl;
				
			  } 
			  case 3:{
				cout<<"Enter mid terms obtained persentage marks here :";
				cin>>obmarks;
				persmt=obmarks*15/100;
				cout<<"overall midterm persentage in w.r.t 15% of subject is : "<<persmt<<endl;
			  }
			  case 4:{
			  	cout<<"Enter persentage marks in CEA here :";
				cin>>obmarks;
				persCEA=obmarks*15/100;
				cout<<"overall CAE persentage  w.r.t 5% of subject is : "<<persCEA<<endl;
				
			  }
			  case 5:{
				cout<<"Enter Final Terms persentage here :";
				cin>>obmarks;
					persft=obmarks*45/100;
				cout<<"overall  final term persentage w.r.t 45% is : "<<persft<<endl;
			  } 
			  gradepers=persft+persmt+perslp+persass+persCEA;
			  }cout<<"Total persentage marks of the student : " <<name[i]<< " is "<<gradepers<<" % "<<endl;
			  }
			
			}break;
			case 4:
			{
			cout<<"your selected class is "<<classes[3]<<endl;
			cout<<"select the number of students here :";
			cin>>n;
			cout<<"Enter the names of"<< n<<" students "<<endl;
			for(i=0;i<n;i++){
				cout<<"name of student "<<i+1<<" is ";
				cin>>name[i];
			    cout<<"roll number of student "<<i+1<<" is ";
			    cin>>roll[i];
			    cout<<"******************************"<<endl;
			    cout<<"Enter Merks of student : "<<name[i]<<" having roll number : "<<roll[i]<<" here"<<endl;
			    cout<<"Press 1 for lab assesments"<<endl;
			    cout<<"Press 2 for lab reports"<<endl;
			    cout<<"Press 3 for Mid terms"<<endl;
		    	cout<<"Press 4 for CEA"<<endl;
			    cout<<"Press 5 for Final terms"<<endl;
			    cin>>choice2;
			  switch(choice2)
			 {case 1:
				{
				cout<<"Enter number of lab assesments here : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"Enter marks in lab assesment no "<<i+1<<" : ";
					cin>>obmarks;
					totalass+=obmarks;
				}
				cout<<"total marks in "<<n<<" assesments are: "<<totalass <<endl;
				persass=totalass*20/100;
				cout<<"overall persentage of lab assesment is : "<<persass<<endl;
				} 
			  case 2:{
			  	cout<<"Enter number of weekly Lab reports here :";
			  	cin>>n;
			  	for(int i=0;i<n;i++){
			  		cout<<"Enter marks in lab report no. :"<<i+1<<" : ";
			  		cin>>obmarks;
			  		totallp+=obmarks;
				  }
				cout<<"total marks in "<<n<<" weekly reports are: "<<totallp <<endl;
				perslp=totallp*15/100;
				cout<<"overall persentage of lab reportss is : "<<perslp<<endl;
				
			  } 
			  case 3:{
				cout<<"Enter mid terms obtained persentage marks here :";
				cin>>obmarks;
				persmt=obmarks*15/100;
				cout<<"overall midterm persentage in w.r.t 15% of subject is : "<<persmt<<endl;
			  }
			  case 4:{
			  	cout<<"Enter persentage marks in CEA here :";
				cin>>obmarks;
				persCEA=obmarks*15/100;
				cout<<"overall CAE persentage  w.r.t 5% of subject is : "<<persCEA<<endl;
				
			  }
			  case 5:{
				cout<<"Enter Final Terms persentage here :";
				cin>>obmarks;
					persft=obmarks*45/100;
				cout<<"overall  final term persentage w.r.t 45% is : "<<persft<<endl;
			  } 
			  gradepers=persft+persmt+perslp+persass+persCEA;
			  }cout<<"Total persentage marks of the student : " <<name[i]<< " is "<<gradepers<<" % "<<endl;
			  }
			
			} break;
			case 5:
			{
			cout<<"your selected class is "<<classes[4]<<endl;
			cout<<"select the number of students here :";
			cin>>n;
			cout<<"Enter the names of"<<n<<" students "<<endl;
			for(i=0;i<n;i++){
				cout<<"name of student "<<i+1<<" is ";
				cin>>name[i];
				cout<<"roll number of student "<<i+1<<" is ";
			    cin>>roll[i];
			    cout<<"******************************"<<endl;
			    cout<<"Enter Merks of student : "<<name[i]<<" having roll number : "<<roll[i]<<" here"<<endl;
			    cout<<"Press 1 for lab assesments"<<endl;
			    cout<<"Press 2 for lab reports"<<endl;
			    cout<<"Press 3 for Mid terms"<<endl;
		    	cout<<"Press 4 for CEA"<<endl;
			    cout<<"Press 5 for Final terms"<<endl;
			    cin>>choice2;
			  switch(choice2)
			 {case 1:
				{
				cout<<"Enter number of lab assesments here : ";
				cin>>n;
				for(i=0;i<n;i++){
					cout<<"Enter marks in lab assesment no "<<i+1<<" : ";
					cin>>obmarks;
					totalass+=obmarks;
				}
				cout<<"total marks in "<<n<<" assesments are: "<<totalass <<endl;
				persass=totalass*20/100;
				cout<<"overall persentage of lab assesment is : "<<persass<<endl;
				} 
			  case 2:{
			  	cout<<"Enter number of weekly Lab reports here :";
			  	cin>>n;
			  	for(int i=0;i<n;i++){
			  		cout<<"Enter marks in lab report no. :"<<i+1<<" : ";
			  		cin>>obmarks;
			  		totallp+=obmarks;
				  }
				cout<<"total marks in "<<n<<" weekly reports are: "<<totallp <<endl;
				perslp=totallp*15/100;
				cout<<"overall persentage of lab reportss is : "<<perslp<<endl;
				
			  } 
			  case 3:{
				cout<<"Enter mid terms obtained persentage marks here :";
				cin>>obmarks;
				persmt=obmarks*15/100;
				cout<<"overall midterm persentage in w.r.t 15% of subject is : "<<persmt<<endl;
			  }
			  case 4:{
			  	cout<<"Enter persentage marks in CEA here :";
				cin>>obmarks;
				persCEA=obmarks*15/100;
				cout<<"overall CAE persentage  w.r.t 5% of subject is : "<<persCEA<<endl;
				
			  }
			  case 5:{
				cout<<"Enter Final Terms persentage here :";
				cin>>obmarks;
					persft=obmarks*45/100;
				cout<<"overall  final term persentage w.r.t 45% is : "<<persft<<endl;
			  } 
			  gradepers=persft+persmt+perslp+persass+persCEA;
			  }cout<<"Total persentage marks of the student : " <<name[i]<< " is "<<gradepers<<" % "<<endl;
			  }
			
			}break;
			
	}
	
	
	
}

string classes[20],name[20];

int main()
{
	 cout<<"\t\t\n\n WELCOME TO AIR UNIVERSITY =====>"<<endl;
	int choice;
	cout<<"\t\t\nChosse your choice=====>:.";
	cout<<"\t  1): teacher portal"<<endl;
	cout<<"\t  2):  university cafe"<<endl;
	cout<<"\t 3) : transport system"<<endl;
	cout<<"\t 4):  exist"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
	{
			cout<<"\t\t\n WElcome to Air university teacher portal"<<endl;
		tp();}break;
		
		case 2:{
			cout<<"welcome to AU main cafe"<<endl;
			
			
		}break;
	
		
		case 3:{cout<<"transport system"<<endl;
		
			}break;
		case 4:{
			cout<<"  \n *****EXISTED***"<<endl;
		}break;
	}
}