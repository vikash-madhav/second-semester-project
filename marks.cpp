#include<iostream>
#include<stdlib.h>
using namespace std;
class details
{
    protected:
    int rollno;
    char studentname[25];
    public:
    void readdetails()
    {
        cout<<"Enter Student Roll Number: ";
        cin>>rollno;
        cout<<"Enter Student Name: ";
        cin>>studentname;
    }
};
class marks : public details
{
    protected:
    int t1[6],t2[6],tm[6],IATests[6];
    int projmarks[6],IAproj[6];
    int lm[6],IAlm[6];
    int pm[6],IApm[6];
    int att[6],watt[6],IAatt[6],attpercentage[6];
    int sm[6];
    int IA[6];
    int total, avg;

    public:
    void internaltest()
    {
        cout<<" Enter Six Subject Marks For Test 1: ";
        for(int i=0;i<6;i++)
        {
            a1:
            cin>>t1[i];
            if(t1[i]>30 && t1[i]<0)
            {
                cout<<" Enter Valid Marks: ";
                goto a1;
            }
        }
        cout<<" Enter Six Subject Marks For Test 2: ";
        for(int i=0;i<6;i++)
        {
            a2:
            cin>>t2[i];
            if(t2[i]>30 && t2[i]<0)
            {
                cout<<" Enter Valid Marks: ";
                goto a2;
            }
        }
        for(int i=0;i<6;i++)
        {
            tm[i]=max(t1[i],t2[i]);
        }
        for(int i=0;i<6;i++)
        {
            IATests[i]=tm[i]/4;
        }
    }

    void project()
    {
        for(int i=0;i<6;i++)
        {
            b1:
            cout<<" Enter Six Subjects Project Marks: ";
            cin>>projmarks[i];
            if(projmarks[i]>20 && projmarks[i]<0)
            {
                cout<<" Enter Valid Marks: ";
                goto b1;
            }
        }
        for(int i=0;i<6;i++)
        {
            IAproj[i]=projmarks[i]/4;
        }
    }

    void labmarks()
    {
        for(int i=0;i<6;i++)
        {
            c1:
            cout<<" Enter Six Subjects Lab Marks: ";
            cin>>lm[i];
            if(lm[1]>10 && lm[i]<0)
            {
                cout<<" Enter Valid Marks: ";
                goto c1;
            }
        }
        for(int i=0;i<6;i++)
        {
            IAlab[i]=lm[i]/4;
        }
        
    }
    void prepratory()
    {
        for(int i=0;i<6;i++)
        {
            d1:
            cout<<" Enter Six Subjects Preparatory Marks: ";
            cin>>pm[i];
            if(pm[i]>70 && pm[i]<0)
            {
                cout<<" Enter Valid Marks: ";
                goto d1;
            }
        }
        for(int i=0;i<6;i++)
        {
            IApm[i]=pm[i]/14;
        }

    }
    void Attendance()
    {
        for(int i=0;i<6;i++)
        {
            cout<<" Enter Six Subjects Working Attendance: ";
            cin>>watt[i];
        }
        for(int i=0;i<6;i++)
        {
            e1:
            cout<<" Enter Six Subjects Attendance: ";
            cin>>att[i];
            if(att[i]>watt[i])
            {
                cout<<"Enter Valid Attendance: ";
                goto e1;
            }
        }
        for(int i=0;i<6;i++)
        {
            attpercentage[i]=(att[i]/watt[i])*100;
        }
        for(int i=0;i<6;i++)
        {
                if(attpercentage[i]>90)
                {
                    IAatt[i]=5;
                }
                else if(attpercentage[i]>80)
                {
                    IAatt[i]=4;
                }
                 else if(attpercentage[i]>70)
                {
                    IAatt[i]=3;
                }
                else if(attpercentage[i]>60)
                {
                    IAatt[i]=2;
                }
                else if(attpercentage[i]>50)
                {
                    IAatt[i]=1;
                }
                else
                {
                    IAatt[i]=0;
                }
            }
    }

    void Semfinal()
    {
        for(int i=0;i<6;i++)
        {
            f1:
            cout<<" Enter Six Subjects Sem Marks: ";
            cin>>sm[i];
            if(sm[i]>70 && sm[i]<0)
            {
                cout<<" Enter Valid Marks: ";
                goto f1;
            }
        }
        for(int i=0;i<6;i++)
        {
            IAsem[i]=sm[i]/14;
        }
    }

    void IAmarks()
    {
        for(int i=0;i<6;i++)
        {
            IA[i]=IATests[i]+IAproj[i]+IAlm[i]+IApm[i]+IAatt[i];
        }
    }

    void totalmarks()
    {
        for(int i=0;i<6;i++)
            {
                total=sm[i]+IA[i];
            }
    }

    void Average()
    {
        avg=total/6;
    }
};
int main()
	{
		details obj;
		marks objt;
		obj.readdetails();
		objt.internaltest();
		objt.project();
		objt.labmarks();
		objt.prepratory();
		objt.Attendance();
		objt.Semfinal();
		objt.IAmarks();
		objt.totalmarks();
		objt.Average();
		return 0;
		cout << obj.rollno << "\n";
		cout << obj.studentname << "\n";
		cout << objt.IATests << "\n";
		cout << objt.IAproj << "\n";
		cout << objt.IAlab << "\n";
		cout << objt.IApm << "\n";
		cout << objt.IAatt << "\n";
		cout << objt.IAsem << "\n";
		cout << objt.IA << "\n";
		cout << objt.total << "\n";
		cout << objt.avg << "\n";
	}
