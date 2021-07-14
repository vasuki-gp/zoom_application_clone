#include<iostream>
using namespace std;

class semester{
    protected:
        char USN[20],student_name[50],branch[30];                                  //M3 , ECA , DCM are subjects
        int C_M3=3, C_ECA=4, C_DCM=3, C_Meas=3, C_AEC=4, C_DS=3;                   //C_M3 is the credit for that respective subject
        int M_M3, M_ECA, M_DCM, M_Meas, M_AEC, M_DS;                               //M_M3 is the marks obtained out of 100
        int CM_M3, CM_ECA, CM_DCM, CM_Meas, CM_AEC, CM_DS;                         //CM_M3 is the credit marks obtained for that respective subject 
        int M3,ECA,DCM,Meas,AEC,DS;
        float total_marks_credits, total_credits;
        public:
            void student_details(){
                cout<<"\n Enter your USN number:";
                cin>>USN;
                cout<<"\n Enter your name:";
                cin>>student_name;
                cout<<"\n Enter your branch name:";
                cin>>branch;
            }
            void marks_details(){
                cout<<"\n Enter your marks in M3:";
                cin>>M_M3;
                cout<<"\n Enter your marks in ECA:";
                cin>>M_ECA;
                cout<<"\n Enter your marks in DCM:";
                cin>>M_DCM;
                cout<<"\n Enter your marks in Measurements:";
                cin>>M_Meas;
                cout<<"\n Enter your marks in AEC:";
                cin>>M_AEC;
                cout<<"\n Enter your marks in DS:";
                cin>>M_DS;

            }
            void credit_marks(){
                if(M_M3 >= 90) CM_M3=10;
                else if(M_M3>=75 && M_M3<90) CM_M3=9;
                else if(M_M3>=60 && M_M3<75) CM_M3=8;
                else if(M_M3>=50 && M_M3<60) CM_M3=7;
                else if(M_M3>=45 && M_M3<50) CM_M3=5;
                else if(M_M3>=40 && M_M3<45) CM_M3=4;
                else CM_M3=0;
                if(M_ECA >= 90) CM_ECA=10;
                else if(M_ECA>=75 && M_ECA<90) CM_ECA=9;
                else if(M_ECA>=60 && M_ECA<75) CM_ECA=8;
                else if(M_ECA>=50 && M_ECA<60) CM_ECA=7;
                else if(M_ECA>=45 && M_ECA<50) CM_ECA=5;
                else if(M_ECA>=40 && M_ECA<45) CM_ECA=4;
                else CM_ECA=0;
                if(M_DCM >= 90) CM_DCM=10;
                else if(M_DCM>=75 && M_DCM<90) CM_DCM=9;
                else if(M_DCM>=60 && M_DCM<75) CM_DCM=8;
                else if(M_DCM>=50 && M_DCM<60) CM_DCM=7;
                else if(M_DCM>=45 && M_DCM<50) CM_DCM=5;
                else if(M_DCM>=40 && M_DCM<45) CM_DCM=4;
                else CM_DCM=0;
                if(M_Meas >= 90) CM_Meas=10;
                else if(M_Meas>=75 && M_Meas<90) CM_Meas=9;
                else if(M_Meas>=60 && M_Meas<75) CM_Meas=8;
                else if(M_Meas>=50 && M_Meas<60) CM_Meas=7;
                else if(M_Meas>=45 && M_Meas<50) CM_Meas=5;
                else if(M_Meas>=40 && M_Meas<45) CM_Meas=4;
                else CM_Meas=0;
                if(M_AEC >= 90) CM_AEC=10;
                else if(M_AEC>=75 && M_AEC<90) CM_AEC=9;
                else if(M_AEC>=60 && M_AEC<75) CM_AEC=8;
                else if(M_AEC>=50 && M_AEC<60) CM_AEC=7;
                else if(M_AEC>=45 && M_AEC<50) CM_AEC=5;
                else if(M_AEC>=40 && M_AEC<45) CM_AEC=4;
                else CM_AEC=0;
                if(M_DS >= 90) CM_DS=10;
                else if(M_DS>=75 && M_DS<90) CM_DS=9;
                else if(M_DS>=60 && M_DS<75) CM_DS=8;
                else if(M_DS>=50 && M_DS<60) CM_DS=7;
                else if(M_DS>=45 && M_DS<50) CM_DS=5;
                else if(M_DS>=40 && M_DS<45) CM_DS=4;
                else CM_DS=0;
            }
            float sgpa(){
                M3=CM_M3*C_M3;
                ECA=CM_ECA*C_ECA;
                DCM=CM_DCM*C_DCM;
                Meas=CM_Meas*C_Meas;
                AEC=CM_AEC*C_AEC;
                DS=CM_DS*C_DS;

                total_marks_credits=M3+ECA+DCM+Meas+AEC+DS;
                total_credits=C_M3+C_ECA+C_DCM+C_Meas+C_AEC+C_DS;

                float sgpa=(total_marks_credits)/(total_credits);
                return sgpa;
            }
            void display(){
                cout<<"__________________________________________________________________________________________________"<<endl;
                cout<<"                               RESULT SHEET OF "<<student_name<<endl;
                cout<<"__________________________________________________________________________________________________"<<endl;
                cout<<"   SUBJECT     TOTAL MARKS     OBTAINED MARKS     CREDIT MARKS     SUBJECT CREDITS     CREDITS    "<<endl;
                cout<<"__________________________________________________________________________________________________"<<endl;
                cout<<"  Maths-3        100            "<<M_M3<<"        "<<CM_M3<<"       "<<C_M3<<"         "<<M3 <<endl;
                cout<<"   ECA           100            "<<M_ECA<<"       "<<CM_ECA<<"      "<<C_ECA<<"        "<<ECA<<endl;
                cout<<"   DCM           100            "<<M_DCM<<"       "<<CM_DCM<<"      "<<C_DCM<<"        "<<DCM<<endl;
                cout<<"  Measurements   100            "<<M_Meas<<"      "<<CM_Meas<<"     "<<C_Meas<<"       "<<Meas<<endl;
                cout<<"   AEC           100            "<<M_AEC<<"       "<<CM_AEC<<"      "<<C_AEC<<"        "<<AEC<<endl;
                cout<<"   DS            100            "<<M_DS<<"        "<<CM_DS<<"       "<<C_DS<<"         "<<DS<<endl;
                cout<<"__________________________________________________________________________________________________"<<endl;
                cout<<"   Total:                                                           "<<total_credits<<" "<<total_marks_credits<<endl;
                cout<<"__________________________________________________________________________________________________"<<endl;
                
            }


};
int main(){
    semester s;
    s.student_details();
    s.marks_details();
    s.credit_marks();
    double aggregate;
    aggregate=s.sgpa();
    s.display();
    
    cout<<"YOUR AGGREGATE OF THIS SEM:"<<aggregate<<endl;
    cout<<endl;

    return 0;
}