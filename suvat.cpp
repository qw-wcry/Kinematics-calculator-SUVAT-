//by qutaibah wahbeh. Github: https://github.com/qw-wcry/Suvat-Calculator-Cpp/blob/main/README.md
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int bigchoice;
cout << "\n\nChoose\n1)Find Displacement\n2)Find Initial Velocity\n3)Find Final Velocity\n4)Find Acceleration\n5)Find Time\nAnswer: ";
cin >> bigchoice;
if (bigchoice == 1){
        int answer;

        cout << "\n\nFind the displacement program\n";
        cout << "What is missing from the question?\n1) Initial Velocity\n2) Final Velocity\n3) acceleration\n4) time\nAnswer: ";
        cin >> answer;
        if (answer == 1){
            double fv1,acc,time;
            cout << "\nMissing: Initial Velocity\nUsing formula S =vt-1/2(at^2)\n"; 
            cout << "Enter Final Velocity: ";
            cin >> fv1;
            cout << "\nFinal Velocity: ";
            cout << fv1;
            cout << "\nEnter Acceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;
            cout << "\nEnter time: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;
            cout << "\n";
            double v1, a1, n1;

            v1 = fv1*time;
            cout << "First Part: ";
            cout << v1;
            a1 = 0.5*acc*pow(time,2);
            cout << "\nSecond Part: ";
            cout << a1;
            n1 = v1-a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else if (answer == 2){

        double iv1,acc,time;
            cout << "\nMissing: Final Velocity\nUsing formula S = ut+ 1/2 a* t^2\n"; //s= ut+ 1/2 a*t^2
            cout << "Enter Initial Velocity: ";
            cin >> iv1;
            cout << "\nFinal Velocity: ";
            cout << iv1;
            cout << "\nEnter Acceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;
            cout << "\nEnter time: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;
            cout << "\n";
            double v1, a1, n1,q1,c1;

            v1 = iv1*time;
            cout << "\nFirst Part: ";
            cout << v1;
            a1 = 0.5;
            q1 = acc*pow(time,2);
            c1 = q1*a1;
            cout << "\nSecond Part: ";
            cout << c1;
            n1 = v1-c1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;

        }
        else if (answer == 3){
            double iv1,acc,time,fv1;
            cout << "\nMissing: Acceleration\nUsing formula S = t/2 (u+v)\n"; //s= t/2 (u+v)

            cout << "Enter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial Velocity: ";
            cout << iv1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "Final Velocity: ";
            cout << fv1;

            cout << "\nEnter time: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;

            cout << "\n";

            double v1, a1, n1,q1,c1;

            v1 = time /2;
            cout << "First Part: ";
            cout << v1;
            q1 = iv1 + fv1;
            cout << "\nSecond Part: ";
            cout << q1;
            n1 = v1*q1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;

        }

        else if (answer == 4){
            double iv1,acc,time,fv1;
            cout << "\nMissing:Time\nUsing formula S = (u^2 + v^2) /2a\n"; //s= (u^2 + v^2) /2a

            cout << "\nEnter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial Velocity: ";
            cout << iv1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "\nFinal Velocity: ";
            cout << fv1;

            cout << "\nEnter Acceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;

            cout << "\n";

            double v1, a1, n1,q1,c1,v2;

            v1 = pow(iv1,2);
            cout << "\nFirst Part: ";
            cout << v1;
            v2 = pow(fv1,2);
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = v1 + v2;
            cout << "\nThird Part: ";
            cout << q1;
            a1 = 2*acc;
            n1 = q1/a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else{
            cout << "\n\n\nError\n\n\n";
        }
}
else if (bigchoice == 2){
        int answer;
        cout << "\n\nFind the Initial Velocity program\n";
        cout << "What is missing from the question?\n1) Displacement\n2) Final Velocity\n3) acceleration\n4) time\nAnswer: ";
        cin >> answer;
        if (answer == 1){
            double fv1,acc,time,disp,ivv1;
            cout << "\nMissing: Displacement\nUsing formula u = v-at\n"; //u = v-a*t
            cout << "Enter Final Velocity: ";
            cin >> fv1;
            cout << "\nFinal Velocity: ";
            cout << fv1;

            cout << "\nEnter Acceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;

            cout << "\nEnter time: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;

            cout << "\n";
            double v1, a1, n1;

            v1 = fv1; //u=v-(at)
            cout << "First Part: ";
            cout << v1;
            a1 = acc * time;
            cout << "\nSecond Part: ";
            cout << a1;
            n1 = v1-a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else if (answer == 2){

        double iv1,acc,time,disp1;
            cout << "\nMissing: Final Velocity\nUsing formula u= (s-at^2)/2\n"; //u = (s-at^2) /2t
            cout << "Enter Displacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;
            cout << "\nEnter Acceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;
            cout << "\nEnter time: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;
            cout << "\n";
            double v1, a1, n1,q1,c1,e1,b2;
            e1 = pow(time,2);
            b2 = acc * e1;
            v1 = disp1 -b2 ;      //u = (s-at^2) /2t
            cout << "First Part: ";
            cout << v1;
            a1 = 2*time;
            c1 = v1/a1;
            cout << "\nSecond Part: ";
            cout << c1;
            n1 = c1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;

        }
        else if (answer == 3){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing: Acceleration\nUsing formula u = 2s/t+v\n"; //u= 2s/t+v 

            cout << "\nEnter Displacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "Final Velocity: ";
            cout << fv1;

            cout << "\nEnter time: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;

            cout << "\n";

            double v1, a1, n1,q1,c1;

            v1 = 2 * disp1;
            cout << "\nFirst Part: "; //u= 2s/t+v 
            cout << v1;
            q1 = time + fv1;
            cout << "\nSecond Part: ";
            cout << q1;
            n1 = v1/q1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;

        }
        else if (answer == 4){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing: Time\nUsing formula u = √2as -v^2\n"; //u = √2as -v^2

            cout << "\nDisplacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "Final Velocity: ";
            cout << fv1;

            cout << "\nEnter Acceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;

            cout << "\n";

            double v1, a1, n1,q1,c1,v2;

            v1 = acc * disp1;        //u = √2as -v^2
            cout << "\nFirst Part: ";
            cout << v1;
            v2 = pow(fv1,2);
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = v1-v2;
            cout << "\nThird Part: ";
            cout << q1;
            a1 = sqrt(q1);
            n1 = a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else{
            cout << "\n\n\nError\n\n\n";
        }
        }
else if (bigchoice == 3){
            int answer;
            cout << "\n\nFind the Final Velocity program\n";
            cout << "What is missing from the question?\n1)Displacement\n2)Initial Velocity\n3)Acceleration\n4)Time\nAnswer: ";
            cin >> answer;
            if (answer == 1){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing: Displacement\nUsing formula v= u+a*t\n"; //v= u+a*t //throbing turbo cunt

            cout << "\nEnter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial Velocity: ";
            cout << iv1;

            cout << "\nAcceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;

            cout << "\nEnter Time: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;

            cout << "\n";

            double v1, a1, n1,q1,c1;

            v1 = acc * time;
            cout << "\nFirst Part: "; //v= u+a*t
            cout << v1;
            q1 = iv1 + v1;
            cout << "\nSecond Part: ";
            cout << q1;
            n1 = q1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else if (answer == 2){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing:Initial Velocity\nUsing formula u = v= s-at^2 /2t\n"; //v= s-at^2 /2t

            cout << "\nDisplacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;
            cout << "\nEnter Acceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;
            cout << "\nTime: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;
            cout << "\n";
            double v1, a1, n1,q1,c1,v2,d1;
            v1 = pow(time,2);        //v= s-at^2 /2t
            cout << "\nFirst Part: ";
            cout << v1;
            v2 = v1*time;
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = 2*time;
            cout << "\nThird Part: ";
            cout << q1;
            d1=disp1-v2;
            a1 = d1/q1;
            n1 = a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else if (answer == 3){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing: Acceleration\nUsing formula v= 2s/t-u\n"; //v= 2s/t-u

            cout << "\nDisplacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;

            cout << "\nEnter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial Velocity: ";
            cout << iv1;

            cout << "\nTime: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;
            cout << "\n";
            double v1, a1, n1,q1,c1,v2,d1;

            v1 = 2*disp1;        //v= 2s/t-u
            cout << "\nFirst Part: ";
            cout << v1;
            v2 = v1/time;
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = v2 - iv1;
            cout << "\nThird Part: ";
            cout << q1;
            d1=disp1-v2;
            a1 = d1/q1;
            n1 = a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else if (answer == 4){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing: Time\nUsing formula v=√u^2 + 2as\n"; //v=√u^2 + 2as


            cout << "\nEnter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial Velocity: ";
            cout << iv1;

            cout << "\nDisplacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;

            cout << "\nAcceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;


            cout << "\n";

            double v1, a1, n1,q1,c1,v2,d1;

            v1 = pow(iv1,2);        //v=√u^2 + 2as
            cout << "\nFirst Part: ";
            cout << v1;
            v2 = 2*acc*time;
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = v2 + iv1;
            cout << "\nThird Part: ";
            cout << q1;
            d1=sqrt(q1);
            a1 = d1;
            n1 = a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
}
else if (bigchoice == 4){
            int answer;
            cout << "\n\nFind the Acceleration program\n";
            cout << "What is missing from the question?\n1)Displacement\n2)Initial Velocity\n3)Final Velocity\n4)Time\nAnswer: ";
            cin >> answer;
            if (answer == 1){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing: Displacement\nUsing formula a =(v-u)/t\n"; //a = (v-u)/t

            cout << "Enter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial: ";
            cout << iv1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "\nFinal Velocity: ";
            cout << fv1;

            cout << "\nEnter Time: ";
            cin >> time;
            cout << "\nTime: ";
            cout << time;

            cout << "\n";

            double v1, a1, n1,q1,c1;

            v1 = fv1-iv1;
            cout << "First Part: "; //a = (v-u)/t
            cout << v1;
            q1 = v1 / time;
            cout << "\nSecond Part: ";
            cout << q1;
            n1 = q1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;

        }
        else if (answer == 2){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing:Initial Velocity\nUsing formula v= 2(vt-s)/t^2\n"; //v= 2(vt-s)\t^2

            cout << "Displacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "\nFinal Velocity: ";
            cout << fv1;

            cout << "\nTime: ";
            cin >> time;
            cout << "Time: ";
            cout << time;

            cout << "\n";

            double v1, a1, n1,q1,c1,v2,d1;

            v1 = fv1*time;       //v= 2(vt-s)\t^2
            cout << "First Part: ";
            cout << v1;
            v2 = v1-disp1;
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = 2*v2;
            cout << "\nThird Part: ";
            cout << q1;
            d1=pow(time,2);
            a1 = q1/d1;
            n1 = a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else if (answer == 3){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing:Final Velocity\nUsing formula v= 2(s-ut)/t^2\n"; //v= 2(s-ut)\t^2

            cout << "Displacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;

            cout << "\nEnter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial Velocity: ";
            cout << iv1;

            cout << "\nTime: ";
            cin >> time;
            cout << "Time: ";
            cout << time;

            cout << "\n";

            double v1, a1, n1,q1,c1,v2,d1;

            v1 = iv1*time;        //v= 2(s-ut)\t^2
            cout << "\nFirst Part: ";
            cout << v1;
            v2 = disp1-v1;
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = 2*v2;
            cout << "\nThird Part: ";
            cout << q1;
            d1=pow(time,2);
            a1 = q1/d1;
            n1 = a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else if (answer == 4){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing: Time\nUsing formula a=(v^2-u^2)/2s\n"; //a=(v^2-u^2)/2s

            cout << "\nEnter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial Velocity: ";
            cout << iv1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "\nFinal Velocity: ";
            cout << fv1;
            cout << "\nDisplacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;


            cout << "\n";

            double v1, a1, n1,q1,c1,v2,d1,l1;

            v1 = pow(fv1,2);       //a=(v^2-u^2)/2s
            cout << "\nFirst Part: ";
            cout << v1;
            v2 = pow(iv1,2);
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = 2*disp1;
            cout << "\nThird Part: ";
            cout << q1;
            l1 = v1-v2;
            d1=l1/q1;
            a1 = d1;
            n1 = a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
}

else if(bigchoice == 5){

            int answer;
            cout << "\n\nFind the Time program\n";
            cout << "What is missing from the question?\n1)Displacement\n2)Initial Velocity\n3)Final Velocity\n4)Acceleration\nAnswer: ";
            cin >> answer;
            if (answer == 1){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing: Displacement\nUsing formula t=(v-u)/a\n"; //t=(v-u)/a

            cout << "\nEnter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial: ";
            cout << iv1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "\nFinal Velocity: ";
            cout << fv1;

            cout << "\nEnter Acceleration: ";
            cin >> acc;
            cout << "\nAcceleration: ";
            cout << acc;

            cout << "\n";

            double v1, a1, n1,q1,c1;

            v1 = fv1-iv1;
            cout << "First Part: "; //t=(v-u)/a
            cout << v1;
            q1 = v1 / acc;
            cout << "\nSecond Part: ";
            cout << q1;
            n1 = q1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;

        }
        else if (answer == 2){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing:Initial Velocity\nUsing formula t=(v-√v^2-2as)/a\n"; //t=(v-√v^2-2as)/a

            cout << "Displacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "\nFinal Velocity: ";
            cout << fv1;

            cout << "\nAcceleration: ";
            cin >> acc;
            cout << "Acceleration: ";
            cout << acc;

            cout << "\n";

            double v1, a1, n1,q1,c1,v2,d1;

            v1 = pow(fv1,2);        //v=(v-√v^2-2as)/a
            cout << "First Part: ";
            cout << v1;
            v2 = 2*acc*disp1;
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = v1-v2;
            cout << "\nThird Part: ";
            cout << q1;
            d1=sqrt(q1);
            a1 = fv1-q1;
            d1 = a1 / acc;
            n1 = a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else if (answer == 3){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing:Final Velocity\nUsing formula t= (√2as+u^2 -u)/a\n"; //t= (√2as+u^2  -u) / a

            cout << "Displacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;

            cout << "\nEnter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial Velocity: ";
            cout << iv1;

            cout << "\nAcceleration: ";
            cin >> acc;
            cout << "Acceleration: ";
            cout << acc;

            cout << "\n";

            double v1, a1, n1,q1,c1,v2,d1;

            v1 = acc*disp1;        //t= (√2as+u^2  -u) / a
            cout << "\nFirst Part: ";
            cout << v1;
            v2 = pow(iv1,2);
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = v1+v2;
            cout << "\nThird Part: ";
            cout << q1;
            d1=sqrt(q1);
            a1 = q1 - iv1;
            n1 = a1/acc; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }
        else if (answer == 4){
            double iv1,acc,time,fv1,disp1;
            cout << "\nMissing: Acceleration\nUsing formula a=2s/u+v\n"; //a=2s/u+v

            cout << "\nDisplacement: ";
            cin >> disp1;
            cout << "\nDisplacement: ";
            cout << disp1;

            cout << "\nEnter Initial Velocity: ";
            cin >> iv1;
            cout << "\nInitial Velocity: ";
            cout << iv1;

            cout << "\nFinal Velocity: ";
            cin >> fv1;
            cout << "\nFinal Velocity: ";
            cout << fv1;

            cout << "\n";

            double v1, a1, n1,q1,c1,v2,d1,l1;

            v1 = 2*disp1;       //a=2s/u+v
            cout << "\nFirst Part: ";
            cout << v1;
            v2 = iv1+fv1;
            cout << "\nSecond Part: ";
            cout << v2;
            q1 = v1/v2;
            cout << "\nThird Part: ";
            cout << q1;
            d1=q1;
            a1 = d1;
            n1 = a1; //final version
            cout << "\n\nAnswer is: ";
            cout << n1;
        }

}

else {
    cout << "\n\nError\n\n";
}
cout << "\n\n\n\nBuilt By Qutaibah\nUsing: c++\n\n\n";
}