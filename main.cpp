#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include<mmsystem.h>
#include <time.h>
using namespace std;

class Capung
{
private:
    int x,y,syp=0,st=0,a=20,skala=1,ki_cp,ka_cp,at_cp,bw_cp,ki_ms,ka_ms,at_ms,bw_ms,ki_ku,ka_ku,at_ku,bw_ku;//,ki_ms,ka_ny,at_ny,bw_ny;
public:
    void gerak()
    {
        x=mousex();
        y=mousey();
        //x=100; y=100;
    }
    void gambar()
    {
        setcolor(WHITE);
        line(skala*(130+x-135),skala*(0+y-150),skala*(130+x-135),skala*(110+y-150));
        line(skala*(130+x-135),skala*(110+y-150),skala*(120+x-135),skala*(160+y-150));
        line(skala*(120+x-135),skala*(160+y-150),skala*(130+x-135),skala*(190+y-150));
        line(skala*(130+x-135),skala*(190+y-150),skala*(140+x-135),skala*(190+y-150));
        line(skala*(140+x-135),skala*(190+y-150),skala*(150+x-135),skala*(160+y-150));
        line(skala*(150+x-135),skala*(160+y-150),skala*(140+x-135),skala*(110+y-150));
        line(skala*(140+x-135),skala*(110+y-150),skala*(140+x-135),skala*(0+y-150));
        line(skala*(140+x-135),skala*(0+y-150),skala*(135+x-135),skala*(5+y-150));
        line(skala*(135+x-135),skala*(5+y-150),skala*(130+x-135),skala*(0+y-150));
        line(skala*(130+x-135),skala*(110+y-150),skala*(140+x-135),skala*(110+y-150));
        line(skala*(130+x-135),skala*(10+y-150),skala*(140+x-135),skala*(10+y-150));

        //cout<<skala*(130+x-135)<<"\t"<<skala*(140+x-135)<<"\t"<<skala*(190+y-150)<<endl;
        circle(skala*(130+x-135),skala*(190+y-150),skala*(5));
        circle(skala*(140+x-135),skala*(190+y-150),skala*(5));
        ///////////////////////////////////////////////////////
        if (st==0)
        {
            if (syp>=0)
            {
                syp=syp-20;
            }
            else
            {
                st=1;
            }
        }
        if (st==1)
        {
            if (syp<a)
            {
                syp=syp+20;
            }
            else
            {
                st=0;
            }
        }
        //sayap kiri atas
        line(skala*(150+x-135),skala*(160+y-150),skala*(syp+250+x-135),skala*(180+y-150));
        line(skala*(syp+250+x-135),skala*(180+y-150),skala*(syp+270+x-135),skala*(160+y-150));
        line(skala*(syp+270+x-135),skala*(160+y-150),skala*(syp+240+x-135),skala*(150+y-150));
        line(skala*(syp+240+x-135),skala*(150+y-150),skala*(150+x-135),skala*(150+y-150));
        //sayap kiri bawah
        //line(skala*(240+x-135),skala*(150+y-150),skala*(230+x-135),skala*(150+y-150));
        line(skala*(syp+230+x-135),skala*(150+y-150),skala*(syp+260+x-135),skala*(140+y-150));
        line(skala*(syp+260+x-135),skala*(140+y-150),skala*(syp+240+x-135),skala*(130+y-150));
        line(skala*(syp+240+x-135),skala*(130+y-150),skala*(150+x-135),skala*(140+y-150));
        //sayap kanan atas
        line(skala*(270-150+x-135),skala*(160+y-150),skala*(270-250+x-135-syp),skala*(180+y-150));
        line(skala*(270-250+x-135-syp),skala*(180+y-150),skala*(270-270+x-135-syp),skala*(160+y-150));
        line(skala*(270-270+x-135-syp),skala*(160+y-150),skala*(270-240+x-135-syp),skala*(150+y-150));
        line(skala*(270-240+x-135-syp),skala*(150+y-150),skala*(270-150+x-135),skala*(150+y-150));
        //sayap kanan bawah
        //line(skala*(270-240+x-135),skala*(150+y-150),skala*(270-230+x-135),skala*(150+y-150));
        line(skala*(270-230+x-135-syp),skala*(150+y-150),skala*(270-260+x-135-syp),skala*(140+y-150));
        line(skala*(270-260+x-135-syp),skala*(140+y-150),skala*(270-240+x-135-syp),skala*(130+y-150));
        line(skala*(270-240+x-135-syp),skala*(130+y-150),skala*(270-150+x-135),skala*(140+y-150));
    }


    int cekkena(double xm, double ym, int m_ke)
    {
        ki_cp=x-5; ka_cp=x+5;
        at_cp=y+35; bw_cp=y+45;

        /*setcolor(RED);
        circle(ki_cp,at_cp,3);//kiri atas
        circle(ki_cp,bw_cp,3);//kiri bawah
        circle(ka_cp,at_cp,3);//kanan atas
        circle(ka_cp,bw_cp,3);//kanan bawah*/

        if(m_ke==1) //lalat
        {
            ki_ms=xm+29; ka_ms=xm+76.5;
            at_ms=ym+26.25; bw_ms=ym+43.75;
        }

        if(m_ke==2) //nyamuk
        {
            ki_ms=xm-1; ka_ms=xm+60.25;
            at_ms=ym+47.5; bw_ms=ym+75;
        }

        /*circle(ki_ms,at_ms,3);
        circle(ki_ms,bw_ms,3);
        circle(ka_ms,at_ms,3);
        circle(ka_ms,bw_ms,3);*/

        if(m_ke==3) //kupu
        {
            ki_ms=xm+107; ka_ms=xm+173;
            at_ms=ym+162.5; bw_ms=ym+192.5;
        }
        /*
        circle(ki_ms,at_ms,3);
        circle(ki_ms,bw_ms,3);
        circle(ka_ms,at_ms,3);
        circle(ka_ms,bw_ms,3);*/

        if(((ki_cp>=ki_ms&&ki_cp<=ka_ms)||(ka_cp>=ki_ms&&ka_cp<=ka_ms))&&((at_cp>=at_ms&&at_cp<=bw_ms)||(bw_cp>=at_ms&&bw_cp<=bw_ms)))
        {
            return 1;
        }

        //cout<<"Kiri Capung :"<<ki_cp<<endl;

    }

    int cekkena_2(double ki_ku, double ka_ku, double at_ku, double bw_ku)
    {
        ki_cp=x-5; ka_cp=x+5;
        at_cp=y+35; bw_cp=y+45;

         if(((ki_cp>=ki_ku&&ki_cp<=ka_ku)||(ka_cp>=ki_ku&&ka_cp<=ka_ku))&&((at_cp>=at_ku&&at_cp<=bw_ku)||(bw_cp>=at_ku&&bw_cp<=bw_ku)))
        {
            return 1;
        }
    }

};

class Nyamuk
{
private:
    int x=0,y=0,syp=0,st=0,a=5,skala=1;
public:
    int out_x() {return x;}
    int out_y() {return y;}

    bool status_kena=false;
    void gerakatas()
    {
        if(status_kena==true)
        {
            y=y+1000;
        }
        y=y-10;
        if (y<=0)
        {
            y=getmaxy();
            x=rand()%1366;
            status_kena=false;
        }
    }
    void gerakkanan()
    {
        if(status_kena==true)
        {
            x=x+2000;
        }
        x=x+5;
        if (x>=getmaxx())
        {
            y=rand()%768;
            x=0;
            status_kena=false;
        }
    }
    /*void gerak()
    {
        //x=mousex();
        //y=mousey();
        x=100; y=100;
    }*/
    void gambar()
    {
        //kepala
        line(skala*(41.25+x-13.5),skala*(87.5+y-15),skala*(40+x-13.5),skala*(88.75+y-15));
        line(skala*(40+x-13.5),skala*(88.75+y-15),skala*(41.25+x-13.5),skala*(90+y-15));
        line(skala*(41.25+x-13.5),skala*(90+y-15),skala*(43.75+x-13.5),skala*(90+y-15));
        line(skala*(43.75+x-13.5),skala*(90+y-15),skala*(45+x-13.5),skala*(88.75+y-15));
        line(skala*(45+x-13.5),skala*(88.75+y-15),skala*(43.75+x-13.5),skala*(87.5+y-15));
        //badan1
        //line1 kanan
        line(skala*(41.25+x-13.5),skala*(87.5+y-15),skala*(40+x-13.5),skala*(86.25+y-15));
        line(skala*(40+x-13.5),skala*(86.25+y-15),skala*(40+x-13.5),skala*(78.75+y-15));
        line(skala*(40+x-13.5),skala*(78.75+y-15),skala*(41.25+x-13.5),skala*(77.5+y-15));
        //line2 kiri
        line(skala*(43.75+x-13.5),skala*(87.5+y-15),skala*(45+x-13.5),skala*(86.25+y-15));
        line(skala*(45+x-13.5),skala*(86.25+y-15),skala*(45+x-13.5),skala*(78.75+y-15));
        line(skala*(45+x-13.5),skala*(78.75+y-15),skala*(43.75+x-13.5),skala*(77.5+y-15));
        //badan2 dari kiri
        line(skala*(41.25+x-13.5),skala*(77.5+y-15),skala*(38.75+x-13.5),skala*(75+y-15));//line ke1
        line(skala*(38.75+x-13.5),skala*(75+y-15),skala*(38.75+x-13.5),skala*(65+y-15));//line ke2
        line(skala*(38.75+x-13.5),skala*(65+y-15),skala*(42.5+x-13.5),skala*(62.5+y-15));//line ke3
        line(skala*(42.5+x-13.5),skala*(62.5+y-15),skala*(46.25+x-13.5),skala*(65+y-15));//line ke4
        line(skala*(46.25+x-13.5),skala*(65+y-15),skala*(46.25+x-13.5),skala*(75+y-15));//line ke5
        line(skala*(46.25+x-13.5),skala*(75+y-15),skala*(43.75+x-13.5),skala*(77.5+y-15));//line ke6
        ///////////////////////////////////////////////////

        if (st==0)
        {
            if (syp>=0)
            {
                syp=syp-5;
            }
            else
            {
                st=1;
            }
        }
        if (st==1)
        {
            if (syp<a)
            {
                syp=syp+5;
            }
            else
            {
                st=0;
            }
        }

        //sayap1 dari atas
        line(skala*(45+x-13.5),skala*(85+y-15),skala*(syp+65+x-13.5),skala*(85+y-15));
        line(skala*(syp+65+x-13.5),skala*(85+y-15),skala*(syp+68.75+x-13.5),skala*(82.5+y-15));
        line(skala*(syp+68.75+x-13.5),skala*(82.5+y-15),skala*(45+x-13.5),skala*(82.5+y-15));
        //sayap2 dari atas
        line(skala*(40+x-13.5),skala*(85+y-15),skala*(21.25+x-13.5-syp),skala*(85+y-15));
        line(skala*(21.25+x-13.5-syp),skala*(85+y-15),skala*(17.5+x-13.5-syp),skala*(82.5+y-15));
        line(skala*(17.5+x-13.5-syp),skala*(82.5+y-15),skala*(40+x-13.5),skala*(82.5+y-15));

        //cout<<x<<y<<skala*(syp+17.5+x-13.5)<<"\t"<<skala*(syp+68.75+x-13.5)<<"\t"<<skala*(62.5+y-15)<<"\t"<<skala*(90+y-15)<<endl;
    }
};

class Kupu
{
private:
    int x=0,y=0,syp=0,st=0,a=5,skala=2;
public:
    int out_x() {return x;}
    int out_y() {return y;}

    bool status_kena=false;
    void gerakatas()
    {
        if(status_kena==true)
        {
            y=y+1000;
        }
        y=y+5;
        if (y>=600)
        {
            y=0;
            x=rand()%1200;
            status_kena=false;
        }
    }
    void gerakkanan()
    {
        if(status_kena==true)
        {
            x=x+2000;
        }
        x=x+5;
        if (x>=getmaxx())
        {
            y=rand()%768;
            x=0;
            status_kena=false;
        }
    }
    /*void gerak()
    {
        //x=mousex();
        //y=mousey();
        x=100; y=100;
    }*/
    void gambar()
    {
        //dari kanan
        line(skala*(33.5+x-13.5),skala*(46.25+y-15),skala*(34.75+x-13.5),skala*(48.75+y-15));//line ke 1
        line(skala*(34.75+x-13.5),skala*(48.75+y-15),skala*(36+x-13.5),skala*(58.5+y-15));//lone ke 2
        line(skala*(36+x-13.5),skala*(58.5+y-15),skala*(33.5+x-13.5),skala*(61.25+y-15));//line ke 3
        line(skala*(33.5+x-13.5),skala*(61.25+y-15),skala*(31+x-13.5),skala*(58.5+y-15));//line ke4
        line(skala*(31+x-13.5),skala*(58.5+y-15),skala*(32.25+x-13.5),skala*(48.75+y-15));//line ke 5
        line(skala*(32.25+x-13.5),skala*(48.75+y-15),skala*(33.5+x-13.5),skala*(46.25+y-15));//line ke 6
        //////////////////////////////////////////////////////////////////////

         if (st==0)
        {
            if (syp>=0)
            {
                syp=syp-5;
            }
            else
            {
                st=1;
            }
        }
        if (st==1)
        {
            if (syp<a)
            {
                syp=syp+5;
            }
            else
            {
                st=0;
            }
        }

        //dari bawah
        line(skala*(34.75+x-13.5),skala*(48.75+y-15),skala*(syp+38.5+x-13.5),skala*(47.25+y-15)); //sayap line ke 1
        line(skala*(syp+38.5+x-13.5),skala*(47.25+y-15),skala*(syp+42.25+x-13.5),skala*(49.75+y-15));//sayap line ke 2
        line(skala*(syp+42.25+x-13.5),skala*(49.75+y-15),skala*(syp+40.5+x-13.5),skala*(52.25+y-15));//sayap line ke 3
        line(skala*(syp+40.5+x-13.5),skala*(52.25+y-15),skala*(syp+43.5+x-13.5),skala*(52.25+y-15));//sayap line ke 4
        line(skala*(syp+43.5+x-13.5),skala*(52.25+y-15),skala*(syp+45+x-13.5),skala*(58.5+y-15));//sayap line ke 5
        line(skala*(syp+45+x-13.5),skala*(58.5+y-15),skala*(syp+42.25+x-13.5),skala*(61.25+y-15));//sayap line ke 6
        line(skala*(syp+42.25+x-13.5),skala*(61.25+y-15),skala*(36+x-13.5),skala*(58.5+y-15));//sayap line ke 7

        //dari bawah
        line(skala*(32.25+x-13.5),skala*(48.75+y-15),skala*(28.5+x-13.5-syp),skala*(47.25+y-15)); //ke 1
        line(skala*(28.5+x-13.5-syp),skala*(47.25+y-15),skala*(24.75+x-13.5-syp),skala*(49.75+y-15));//ke 2
        line(skala*(24.75+x-13.5-syp),skala*(49.75+y-15),skala*(26.5+x-13.5-syp),skala*(52.25+y-15));//ke 3
        line(skala*(26.5+x-13.5-syp),skala*(52.5+y-15),skala*(23.5+x-13.5-syp),skala*(52.25+y-15));//ke 4
        line(skala*(23.5+x-13.5-syp),skala*(52.5+y-15),skala*(22+x-13.5-syp),skala*(58.5+y-15));//ke 5
        line(skala*(22+x-13.5-syp),skala*(58.5+y-15),skala*(24.75+x-13.5-syp),skala*(61.25+y-15));//ke 6
        line(skala*(24.75+x-13.5-syp),skala*(61.25+y-15),skala*(31+x-13.5),skala*(58.5+y-15));//ke 7

        //cout<<x<<y<<skala*(syp+22+x-13.5)<<"\t"<<skala*(syp+45+x-13.5)<<"\t"<<skala*(46.25+y-15)<<"\t"<<skala*(61.25+y-15)<<endl;
    }
    int ki_ku() {return skala*(syp+22+x-13.5);}
    int ka_ku() {return skala*(syp+45+x-13.5);}
    int at_ku() {return skala*(46.25+y-15);}
    int bw_ku() {return skala*(61.25+y-15);}
};

class Lalat
{
private:
    int x=0,y=0,syp=0,st=0,a=5,skala=1;
public:
    int out_x() {return x;}
    int out_y() {return y;}
    bool status_kena=false;
    void gerakatas()
    {
        if(status_kena==true)
        {
            y=y+1000;
        }
        y=y+5;
        if (y>=600)
        {
            y=0;
            x=rand()%1200;
            status_kena=false;
        }
    }
    void gerakkanan()
    {
        if(status_kena==true)
        {
            x=x+2000;
        }
        x=x+5;
        if (x>=getmaxx())
        {
            y=rand()%768;
            x=0;
            status_kena=false;
        }
    }
    /*void gerak()
    {
        x=mousex();
        y=mousey();
        //x=100; y=100;
    }*/
    void gambar()
    {
        //kepala
        line(skala*(61.25+x-13.5),skala*(53.75+y-15),skala*(58.75+x-13.5),skala*(56.25+y-15));
        line(skala*(58.75+x-13.5),skala*(56.25+y-15),skala*(61.25+x-13.5),skala*(58.75+y-15));
        line(skala*(61.25+x-13.5),skala*(58.75+y-15),skala*(66.25+x-13.5),skala*(58.75+y-15));
        line(skala*(66.25+x-13.5),skala*(58.75+y-15),skala*(68.75+x-13.5),skala*(56.25+y-15));
        line(skala*(68.75+x-13.5),skala*(56.25+y-15),skala*(66.25+x-13.5),skala*(53.75+y-15));

        //badan
        line(skala*(62.5+x-13.5),skala*(55+y-15),skala*(60+x-13.5),skala*(52.5+y-15));
        line(skala*(60+x-13.5),skala*(52.5+y-15),skala*(60+x-13.5),skala*(43.75+y-15));
        line(skala*(60+x-13.5),skala*(43.75+y-15),skala*(63.75+x-13.5),skala*(41.25+y-15));
        line(skala*(63.75+x-13.5),skala*(41.25+y-15),skala*(67.5+x-13.5),skala*(43.75+y-15));
        line(skala*(67.5+x-13.5),skala*(43.75+y-15),skala*(67.5+x-13.5),skala*(52.5+y-15));
        line(skala*(67.5+x-13.5),skala*(52.5+y-15),skala*(65+x-13.5),skala*(55+y-15));
        ///////////////////////////////////////////////////////////////////////

         if (st==0)
        {
            if (syp>=0)
            {
                syp=syp-5;
            }
            else
            {
                st=1;
            }
        }
        if (st==1)
        {
            if (syp<a)
            {
                syp=syp+5;
            }
            else
            {
                st=0;
            }
        }

        //sayap
        line(skala*(60+x-13.5),skala*(52.5+y-15),skala*(syp+47.5+x-13.5),skala*(52.5+y-15 ));
        line(skala*(syp+47.5+x-13.5),skala*(52.5+y-15),skala*(syp+42.5+x-13.5),skala*(47.5+y-15));
        line(skala*(syp+42.5+x-13.5),skala*(47.5+y-15),skala*(syp+50+x-13.5),skala*(46.25+y-15));
        line(skala*(syp+50+x-13.5),skala*(46.25+y-15),skala*(syp+55+x-13.5),skala*(47.5+y-15));
        line(skala*(syp+55+x-13.5),skala*(47.5+y-15),skala*(syp+52.5+x-13.5),skala*(45+y-15));
        line(skala*(syp+52.5+x-13.5),skala*(45+y-15),skala*(syp+51.25+x-13.5),skala*(42.5+y-15));
        line(skala*(syp+51.25+x-13.5),skala*(42.5+y-15),skala*(syp+56.25+x-13.5),skala*(43.75+y-15));
        line(skala*(syp+56.25+x-13.5),skala*(43.75+y-15),skala*(60+x-13.5),skala*(47.5+y-15));

        line(skala*(67.5+x-13.5),skala*(52.5+y-15),skala*(80+x-13.5-syp),skala*(52.5+y-15));
        line(skala*(80+x-13.5-syp),skala*(52.5+y-15),skala*(85+x-13.5-syp),skala*(47.5+y-15));
        line(skala*(85+x-13.5-syp),skala*(47.5+y-15),skala*(77.5+x-13.5-syp),skala*(46.25+y-15));
        line(skala*(77.5+x-13.5-syp),skala*(46.25+y-15),skala*(72.5+x-13.5-syp),skala*(47.5+y-15));
        line(skala*(72.5+x-13.5-syp),skala*(47.5+y-15),skala*(75+x-13.5-syp),skala*(45+y-15));
        line(skala*(75+x-13.5-syp),skala*(45+y-15),skala*(76.25+x-13.5-syp),skala*(42.5+y-15));
        line(skala*(76.25+x-13.5-syp),skala*(42.5+y-15),skala*(71.25+x-13.5-syp),skala*(43.75+y-15));
        line(skala*(71.25+x-13.5-syp),skala*(43.75+y-15),skala*(67.5+x-13.5),skala*(47.5+y-15));

        //cout<<skala*(syp+42.5+x-13.5)<<"\t"<<skala*(syp+85+x-13.5)<<"\t"<<skala*(41.25+y-15)<<"\t"<<skala*(58.75+y-15)<<endl;
    }
};

int main()
{
    initwindow(1366,768);
    int score=0;
    char b[10];
    Capung C;
    char* WAV1="adhel1.wav";
    char* WAV2="adhel2.wav";
    char* WAV3="adhel3.wav";
    Nyamuk N[9];
    Nyamuk N2;
    Kupu K[6];
    Kupu K2;
    Lalat L[7];
    Lalat L2;
    int i,c;
    double xk, yk;
    sndPlaySound(WAV3,SND_ASYNC|SND_LOOP);
    goto menu;
    game_play:
    sndPlaySound(WAV1,SND_ASYNC|SND_LOOP);
    do
    {
        setcolor(WHITE);
        settextstyle(3,HORIZ_DIR,3); outtextxy(100,20,"Aysha Nabila Adhelina");
        settextstyle(3,HORIZ_DIR,3); outtextxy(100,50,"2916100041");
            //setbkcolor(LIGHTBLUE);
            if(kbhit())
            {
                c=getch();
                if(c==59)
                {
                    goto howto;
                }
            }

        C.gerak();
        C.gambar();

        for(i=0;i<3;i++)
        {
            if(i==0) {setcolor(MAGENTA);K[i].gerakatas();}
            if(i==1) {setcolor(BLUE);K[i].gerakkanan();}
            if(i==2) {setcolor(GREEN);K[i].gerakkanan();}
            /*if(i==3) {setcolor(BLUE);K[i].gerakatas();}
            if(i==4) {setcolor(YELLOW);K[i].gerakkanan();}
            if(i==5) {setcolor(GREEN);K[i].gerakatas();}
            if(i==6) {setcolor(MAGENTA);K[i].gerakkanan();}
            if(i==7) {setcolor(YELLOW);K[i].gerakatas();}
            if(i==8) {setcolor(BLUE);K[i].gerakatas();}*/

            K[i].gambar();
            if(C.cekkena_2(K[i].ki_ku(),K[i].ka_ku(),K[i].at_ku(),K[i].bw_ku())==1)
            {
                K[i].status_kena=true;
                score=score+10;
            }
        }

        for(i=0;i<1;i++)
        {
            if(i==0) {setcolor(GREEN);L[i].gerakkanan();}
            if(i==1) {setcolor(BLUE);L[i].gerakkanan();}
            if(i==2) {setcolor(MAGENTA);L[i].gerakkanan();}

            L[i].gambar();
            if(C.cekkena(L[i].out_x(),L[i].out_y(),1)==1)
            {
                L[i].status_kena=true;
                score=score+10;
            }
        }

        for(i=0;i<1;i++)
        {
            if(i==0) {setcolor(YELLOW);N[i].gerakkanan();}
            if(i==1) {setcolor(BLUE);N[i].gerakkanan();}
            if(i==2) {setcolor(YELLOW);N[i].gerakatas();}
            if(i==3) {setcolor(GREEN);N[i].gerakkanan();}
            if(i==4) {setcolor(LIGHTGRAY);N[i].gerakkanan();}
            if(i==5) {setcolor(LIGHTCYAN);N[i].gerakatas();}

            N[i].gambar();
            if(C.cekkena(N[i].out_x(),N[i].out_y(),2)==1)
            {
                N[i].status_kena=true;
                score=score+10;
            }
        }

        setcolor(RED);
        N2.gambar();
        N2.gerakatas();

        setcolor(RED);
        K2.gambar();
        K2.gerakatas();

        setcolor(RED);
        L2.gambar();
        L2.gerakatas();

        if(C.cekkena(N2.out_x(),N2.out_y(),2)==1)
            {
                N2.status_kena=true;
                goto game_over;
                cout<<"Hai"<<endl;
            }

        if(C.cekkena(K2.out_x(),K2.out_y(),3)==1)
            {
                K2.status_kena=true;
                goto game_over;
                cout<<"Hai"<<endl;
            }

        if(C.cekkena(L2.out_x(),L2.out_y(),1)==1)
            {
                L2.status_kena=true;
                goto game_over;
                cout<<"Hai"<<endl;
            }

        itoa(score,b,10);
        outtextxy(10,620,"Score");
        outtextxy(170,620,b);
        delay(20);
        cleardevice();

    }
    while (1);

    while(1)
    {
        menu:
            cleardevice();
            xk=mousex(); yk=mousey();
            setcolor(WHITE);
            settextstyle(3,HORIZ_DIR,3); outtextxy(100,20,"Aysha Nabila Adhelina");
            settextstyle(3,HORIZ_DIR,3); outtextxy(100,50,"2916100041");
            settextstyle(3,HORIZ_DIR,9);
            setcolor(BLUE);
            outtextxy(getmaxx()/2-250,60,"GO FLY!");
            settextstyle(3,HORIZ_DIR,7);
            setcolor(GREEN);
            outtextxy(600,250,"PLAY");
            setcolor(RED);
            outtextxy(615,350,"EXIT");

            if(((xk>=600)&&(xk<=768))&&((yk>=250)&&(yk<=310)))
            {
                setcolor(GREEN);
                line(550,250,525,280);line(525,280,550,310);line(550,310,575,280);line(575,280,550,250);
                line(818,250,793,280);line(793,280,818,310);line(818,310,843,280);line(843,280,818,250);
                if(ismouseclick(WM_LBUTTONDOWN)){goto game_play;}
            }
            if(((xk>=600)&&(xk<=768))&&((yk>=350)&&(yk<=410)))
            {
                setcolor(RED);
                line(550,350,525,380);line(525,380,550,410);line(550,410,575,380);line(575,380,550,350);
                line(818,350,793,380);line(793,380,818,410);line(818,410,843,380);line(843,380,818,350);
                if(ismouseclick(WM_LBUTTONDOWN)){return 0;}
            }


            delay(50);
    }
    while(1)
    {
        howto:
            xk=mousex(); yk=mousey();
            setcolor(YELLOW);
            settextstyle(3,HORIZ_DIR,3); outtextxy(100,20,"Aysha Nabila Adhelina");
            settextstyle(3,HORIZ_DIR,3); outtextxy(100,50,"2916100041");
            setcolor(BLUE);
            settextstyle(3,HORIZ_DIR,7); outtextxy(getmaxx()/2-250,50,"HOW TO PLAY");
            settextstyle(3,HORIZ_DIR,5);
            setcolor(LIGHTGREEN);
            outtextxy(100,250,"1. Use the mouse to move the dragonfly around");
            setcolor(LIGHTCYAN);
            outtextxy(100,350,"2. Eat the bugs around your dragonfly ");
            setcolor(RED);
            outtextxy(getmaxx()/2-250,550,"DONT EAT THE RED BUGS!!!");
                        if(kbhit())
            {
                c=getch();
                if(c==59)
                {
                    goto game_play;
                }
            }
    }
    game_over:
    sndPlaySound(WAV2,SND_ASYNC|SND_LOOP);
    while(1)
    {
            settextstyle(3,HORIZ_DIR,9);
            outtextxy(615,350,"GAME OVER");
            delay(50);
    }
}
