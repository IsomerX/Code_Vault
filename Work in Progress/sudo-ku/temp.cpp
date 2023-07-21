<<<<<<< HEAD
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

class TIME1
{
        time_point<system_clock> start, end, current;

public:
        void exam_start()
        {
                start = system_clock::now();
        }

        void exam_end()
        {
                end = system_clock::now();

                duration<double> elapsed = end - start;
                try
                {
                        if (end >= start)
                        {
                                cout << "congratulations you finished the test in: " << elapsed.count() << "seconds" << endl;
                        }
                        else
                        {
                                throw(start);
                        }
                }
                catch (system_clock start)
                {
                        cout << "denied " << elapsed.count();
                }
        }
};

int main()
{
        TIME1 student1;
        student1.exam_start();
        // after 2-3 hours
        student1.exam_end();
=======
#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;

class TIME1
{
        time_point<system_clock> start, end, current;

public:
        void exam_start()
        {
                start = system_clock::now();
        }

        void exam_end()
        {
                end = system_clock::now();

                duration<double> elapsed = end - start;
                try
                {
                        if (end >= start)
                        {
                                cout << "congratulations you finished the test in: " << elapsed.count() << "seconds" << endl;
                        }
                        else
                        {
                                throw(start);
                        }
                }
                catch (system_clock start)
                {
                        cout << "denied " << elapsed.count();
                }
        }
};

int main()
{
        TIME1 student1;
        student1.exam_start();
        // after 2-3 hours
        student1.exam_end();
>>>>>>> ac136525cd8c595a2d2555d7e5c6e3543280ec8b
}