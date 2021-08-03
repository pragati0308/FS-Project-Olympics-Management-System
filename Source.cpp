#include<iostream>
#include<conio.h>
#include<string>
#include<stdlib.h>
#include<fstream>
#define datafile "Olympics.txt"
using namespace std;
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include "MyForm5.h"
#include "MyForm6.h"
#include "MyForm7.h"
string pname, page, pgender, event, category, country, winner, year, mname, mage, mgender, mevent, mcategory, mcountry, mwinner, myear,dname1,scountry1,mname2;
int pos, j = 0;
namespace Project1 {
    class Olympics
    {
    public: char Players[25], Events[25], Countries[25], age[10], gender[10], winner[25], year[5], category[15], buffer[200], buffer1[45], buffer2[40], buffer3[55],buffer4[100];
          //buffer is used for packing and unpacking
    }s, s1[150];
    int i, num = 0, mode = 1, indsize;//mode=1 out,append,in
    fstream stdfile;
    char temp[75];
    int m;
    void pack()
    {//before pack is called object s will have the fields read from the user
        fstream app;
        ofstream out, out1, out2;
        //default mode of app is ios::out or ios::in
        if (mode == 0)
        {
            app.open("Olympics.txt", ios::app);
            out.open("Players.txt", ios::app);
            out1.open("Events.txt", ios::app);
            out2.open("Countries.txt", ios::app);
        }
        else
        {
            app.open("Olympics.txt", ios::out);
            out.open("Players.txt", ios::out);
            out1.open("Events.txt", ios::out);
            out2.open("Countries.txt", ios::out);
        }
        strcpy_s(s.buffer, s.Players);
        strcat_s(s.buffer, "|");
        strcat_s(s.buffer, s.age);
        strcat_s(s.buffer, "|");
        strcat_s(s.buffer, s.gender);
        strcat_s(s.buffer, "|");
        strcat_s(s.buffer, s.Events);
        strcat_s(s.buffer, "|");
        strcat_s(s.buffer, s.category);
        strcat_s(s.buffer, "|");
        strcat_s(s.buffer, s.Countries);
        strcat_s(s.buffer, "|");
        strcat_s(s.buffer, s.winner);
        strcat_s(s.buffer, "|");
        strcat_s(s.buffer, s.year);
        int count = strlen(s.buffer);
        for (int k = 0; k < 65 - count; k++)
            strcat_s(s.buffer, "|");
        strcat_s(s.buffer, "\n");
        strcpy_s(s.buffer1, s.Players);
        strcat_s(s.buffer1, "*");
        strcat_s(s.buffer1, s.age);
        strcat_s(s.buffer1, "*");
        strcat_s(s.buffer1, s.gender);
        strcat_s(s.buffer1, "\n");
        strcpy_s(s.buffer2, s.Events);
        strcat_s(s.buffer2, "@");
        strcat_s(s.buffer2, s.category);
        strcat_s(s.buffer2, "\n");
        strcpy_s(s.buffer3, s.Countries);
        strcat_s(s.buffer3, "#");
        strcat_s(s.buffer3, s.winner);
        strcat_s(s.buffer3, "#");
        strcat_s(s.buffer3, s.year);
        strcat_s(s.buffer3, "\n");
        app << s.buffer;
        out << s.buffer1;
        out1 << s.buffer2;
        out2 << s.buffer3;
        app.close();
        out.close();
        out1.close();
        out2.close();
    }
    void unpack()
    {
        fstream in;//in is logical file
        in.open("Olympics.txt", ios::in);
        int i = 0;
        num = 0;
        while (!in.eof())//eof returns true if the pointer is at end of file
        {
            //getline will read until the end of file
            in.getline(s1[i].Players, 25, '|');//read until pipeline
            in.getline(s1[i].age, 10, '|');
            in.getline(s1[i].gender, 10, '|');
            in.getline(s1[i].Events, 25, '|');
            in.getline(s1[i].category, 15, '|');
            in.getline(s1[i].Countries, 25, '|');
            in.getline(s1[i].winner, 25, '|');
            in.getline(s1[i].year, 5, '|');
            in.getline(temp, 75, '\n');
            num++;
            i++;
            //index for object array and num is number of records read from hard disk
        }
        in.close();

    }
    void MyForm2::write() {
        strcpy_s(s.Players, pname.c_str());
        strcpy_s(s.age, page.c_str());
        strcpy_s(s.gender, pgender.c_str());
        strcpy_s(s.Events, event.c_str());
        strcpy_s(s.category, category.c_str());
        strcpy_s(s.Countries, country.c_str());
        strcpy_s(s.winner, winner.c_str());
        strcpy_s(s.year, year.c_str());
        mode = 0;
        pack();
    }
    void MyForm3:: display()
    {
        int pos;
        unpack();
        num--;
        int k = 0;
        ofstream f1;
        f1.open("Olympic.txt", ios::out);
        for (; k < num; k++) {
                strcpy_s(s.buffer4, s1[k].Players);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].age);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].gender);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].Events);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].category);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].Countries);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].winner);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].year);
                strcat_s(s.buffer4, "\n");
                f1 << s.buffer4;
        }f1.close();
    }
    void MyForm4::search()
    {
        int pos;
        unpack();
        int k = 0;
        ofstream f1;
        f1.open("Olympic.txt", ios::out);
        for (; k < num; k++) {
            if (strcmp(scountry1.c_str(), s1[k].Countries) == 0) {

                strcpy_s(s.buffer4, s1[k].Players);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].age);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].gender);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].Events);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].category);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].Countries);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].winner);
                strcat_s(s.buffer4, "|");
                strcat_s(s.buffer4, s1[k].year);
                strcat_s(s.buffer4, "\n");
                f1 << s.buffer4;
            }
        }f1.close();
    }
    void MyForm5::remove()
    {
        int pos;
        unpack();
        int k = 0;
        for (; k < num; k++) {
            if (strcmp(dname1.c_str(), s1[k].Players) == 0) {
                break;
            }
        }
        if (k != num) {
            fstream f;
            f.open("Olympics.txt", ios::in | ios::out);
            f.seekp(67 * k, ios::beg);
            f.put('$');
            f.close();
        }

    }
    void MyForm6::msearch() {
        unpack();
        for (j=0; j < num; j++) {
            if (strcmp(mname2.c_str(), s1[j].Players) == 0) {
                break;
            }
        }
    }
    void MyForm7::modify()
    {
        unpack();
        num--;
        if (j < num) {
            strcpy_s(s1[j].Players, mname.c_str());
            strcpy_s(s1[j].age, mage.c_str());
            strcpy_s(s1[j].gender, mgender.c_str());
            strcpy_s(s1[j].Events, mevent.c_str());
            strcpy_s(s1[j].category, mcategory.c_str());
            strcpy_s(s1[j].Countries, mcountry.c_str());
            strcpy_s(s1[j].winner, mwinner.c_str());
            strcpy_s(s1[j].year, myear.c_str());
        }
        j = 0;
        mode = 1;
        while(j<num)
        {
            strcpy_s(s.Players, s1[j].Players);
            strcpy_s(s.age, s1[j].age);
            strcpy_s(s.gender, s1[j].gender);
            strcpy_s(s.Events, s1[j].Events);
            strcpy_s(s.category, s1[j].category);
            strcpy_s(s.Countries, s1[j].Countries);
            strcpy_s(s.winner, s1[j].winner);
            strcpy_s(s.year, s1[j].year);
            pack();
            mode = 0;
            j++;
        }
    }
}