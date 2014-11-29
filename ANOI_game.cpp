#include <iostream>
#include <stdbool.h>
#include <vector>
#include <cstdlib>
using namespace std;

int print_kolones(vector <int> kolona0, vector <int> kolona1, vector <int> kolona2, int boxes)
{
	cout<<endl<<endl;
	int i;
	for (i=boxes-1; i>=0; --i)
 	{
		if (kolona0.size()>i)
		{
			cout<<"  "<<kolona0[i]<<"  ";
		}else{
			cout<<"  *  ";
		}

		if (kolona1.size()>i)
		{
			cout<<"  "<<kolona1[i]<<"  ";
		}else{
			cout<<"  *  ";
		}

		if (kolona2.size()>i)
		{
			cout<<"  "<<kolona2[i]<<"  ";
		}else{
			cout<<"  *  ";
		}

		cout<<endl;
	}
	cout<<"  _    _    _"<<endl;
	cout<<"  1    2    3"<<endl<<endl;
}

int main()
{
system("color f1");

	
	vector <int> kolona0;
	vector <int> kolona_starter;
	vector <int> kolona1;
	vector <int> kolona2;
	int i,boxes,noumero;
	
	cout<<"*******************************************************************************"<<endl;
	cout<<"*                                                                             *"<<endl;
	cout<<"*                                                                             *"<<endl;
    	cout<<"*                                                                             *"<<endl;
	cout<<"*                                                         *       *           *"<<endl;
	cout<<"*         *******        *          *        *****            *               *"<<endl;
	cout<<"*        *       *       **         *      *       *          *               *"<<endl;
	cout<<"*       *         *      * *        *     *         *         *               *"<<endl;
	cout<<"*      *           *     *  *       *     *         *         *               *"<<endl;
	cout<<"*      *           *     *   *      *     *         *         *               *"<<endl;
	cout<<"*      *           *     *    *     *     *         *         *               *"<<endl;
    	cout<<"*      *           *     *     *    *     *         *         *               *"<<endl;
	cout<<"*      *************     *      *   *     *         *         *               *"<<endl;
	cout<<"*      *           *     *       *  *     *         *         *               *"<<endl;
	cout<<"*      *           *     *        * *     *         *         *               *"<<endl;
	cout<<"*      *           *     *         **      *       *          *               *"<<endl;
	cout<<"*      *           *     *          *        *****            *               *"<<endl;
    	cout<<"*                                                                             *"<<endl;
	cout<<"*                                                                             *"<<endl;
    	cout<<"*                                                                             *"<<endl;
	cout<<"*                                                                             *"<<endl;
	cout<<"*******************************************************************************"<<endl<<endl;
	
	system("pause");
	system("cls");
	
	cout<<" How many ANOI boxes do you want? ";
	cin>>boxes;
	system("cls");

	noumero=boxes;
	for (i=0; i<boxes; ++i)
	{
		kolona0.push_back(noumero);
		--noumero;
	}
	
	kolona_starter=kolona0;
	
 	print_kolones(kolona0,kolona1,kolona2,boxes);
	cout<<endl;

	while (kolona_starter!=kolona2)
	{
		int apo,se;
		while (true)
		{
			cout<<" FROM COLUMN : ";
			cin>>apo;
			cout<<endl;
			if ((apo>0)&&(apo<4))
			{
				break;
			}else{
				cout<<" @@ ERROR . . . WRONG CHOICE @@"<<endl<<endl;
				cout<<" CHOSE COLUMNS 1-3 "<<endl<<endl;
			}
		}
		
		while (true)
		{
			cout<<" TO COLUMN : ";
			cin>>se;
			cout<<endl;
			if ((se>0)&&(se<4))
			{
				break;
			}else{
				cout<<" @@ ERROR . . . WRONG CHOICE @@"<<endl;
				cout<<" CHOSE COLUMNS 1-3 "<<endl<<endl;
			}
		}
		
		_Bool flagSTART=0;
		if((kolona0.empty())&&(se==1))
		{
			flagSTART=1;
		}
		else if((kolona1.empty())&&(se==2))
		{
			flagSTART=1;
		}
		else if((kolona2.empty())&&(se==3))
		{
			flagSTART=1;
		}
		else if ((!kolona0.empty())&&(apo==1)&&(!kolona1.empty())&&(se==2))
		{
			if (kolona0[kolona0.size()-1]<kolona1[kolona1.size()-1])
			{
				flagSTART=1;
			}else{
				cout<<" @@ ERROR . . . THE CONTAINER IS SMALLER @@"<<endl<<endl;
				system("pause");
			}
		}
		else if ((!kolona1.empty())&&(apo==2)&&(!kolona2.empty())&&(se==3))
		{
			if (kolona1[kolona1.size()-1]<kolona2[kolona2.size()-1])
			{
				flagSTART=1;
			}else{
				cout<<" @@ ERROR . . . THE CONTAINER IS SMALLER @@"<<endl<<endl;
				system("pause");
			}
		}
		else if ((!kolona2.empty())&&(apo==3)&&(!kolona0.empty())&&(se==1))
		{
			if (kolona2[kolona2.size()-1]<kolona0[kolona0.size()-1])
			{
				flagSTART=1;
			}else{
				cout<<" @@ ERROR . . . THE CONTAINER IS SMALLER @@"<<endl<<endl;
				system("pause");
			}
		}
		else if ((!kolona0.empty())&&(apo==1)&&(!kolona2.empty())&&(se==3))
		{
			if (kolona0[kolona0.size()-1]<kolona2[kolona2.size()-1])
			{
				flagSTART=1;
			}else{
				cout<<" @@ ERROR . . . THE CONTAINER IS SMALLER @@"<<endl<<endl;
				system("pause");
			}
		}
		else if ((!kolona1.empty())&&(apo==2)&&(!kolona0.empty())&&(se==1))
		{
			if (kolona1[kolona1.size()-1]<kolona0[kolona0.size()-1])
			{
				flagSTART=1;
			}else{
				cout<<" @@ ERROR . . . THE CONTAINER IS SMALLER @@"<<endl<<endl;
				system("pause");
			}
		}
		else if ((!kolona2.empty())&&(apo==3)&&(!kolona1.empty())&&(se==2))
		{
			if (kolona2[kolona2.size()-1]<kolona1[kolona1.size()-1])
			{
				flagSTART=1;
			}else{
				cout<<" @@ ERROR . . . THE CONTAINER IS SMALLER @@"<<endl<<endl;
				system("pause");
			}
		}else{
            		cout<<" @@ ERROR . . . WRONG COLUMN @@"<<endl<<endl;
			system("pause");
		}
		
		if (flagSTART)
		{
			_Bool flagcheck=0;
			if ((apo==1)&&(!kolona0.empty()))
			{
				noumero=kolona0[kolona0.size()-1];
				kolona0.pop_back();
				flagcheck=1;
			}
			else if ((apo==2)&&(!kolona1.empty()))
			{
				noumero=kolona1[kolona1.size()-1];
				kolona1.pop_back();
				flagcheck=1;
			}
			else if ((apo==3)&&(!kolona2.empty()))
			{
				noumero=kolona2[kolona2.size()-1];
				kolona2.pop_back();
				flagcheck=1;
			}
			else{
				cout<<" @@ ERROR . . . EMPTY COLUMN @@"<<endl<<endl;
				system("pause");
			}

			if ((se==1)&&(flagcheck))
			{
				kolona0.push_back(noumero);
			}
			else if ((se==2)&&(flagcheck))
			{
				kolona1.push_back(noumero);
			}
			else if ((se==3)&&(flagcheck))
			{
				kolona2.push_back(noumero);
			}
		}

		system("cls");
		print_kolones(kolona0,kolona1,kolona2,boxes);
		cout<<endl;
	}
	
	cout<<endl<<" !!! !!! WINNER !!! !!!"<<endl<<endl;

system("pause");
}
