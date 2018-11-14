
using namespace std;

class Notebook
{
private:
	string name;
	double speed;
	double ram;
protected:
	double bios;
	int hdd;
public:
	string colour;
	int video_kard;

	void set (string c, int v )
	{
		colour = c;
		video_kard = v;
	}
	void set (string nm, double s, double r)
	{
		name = nm;
		speed = s;
		ram = r;
	}
	void set (double b, int h )
	{
       bios = b;
       hdd = h;
	}


	void getPrivate()
	{
		cout << "Name -  " << name << endl << "Processor speed -  " <<speed<< endl << "RAM -  " << ram << endl;

	}
	void getPublic()
	{
		cout<<"Colour - "<<colour<<endl<<"Video card - "<<video_kard<<endl<<endl;
	}
	 void getProtected()
	 {
	 	cout<< "Bios- "<<bios<<endl<<"HDD - "<<hdd<<endl;
	 }
		Notebook (){}

		Notebook (string name, double speed, double ram){}

	Notebook (string colour,int video_kard){}

	 ~Notebook(){ }

};
