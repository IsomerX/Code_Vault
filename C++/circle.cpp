#include <iostream>
#include <cstring>
#include <assert.h>
#ifdef _WIN32
#include <windows.h>

void sleep(unsigned milliseconds)
{
    Sleep(milliseconds);
}
#else
#include <unistd.h>

/*void sleep(unsigned milliseconds)
{
    usleep(milliseconds * 1000); // takes microseconds
}*/
#endif

#define WIDTH 32
#define HEIGHT 32
#define FPS 30
#define RADIUS WIDTH / 4

using namespace std;

static char screen[HEIGHT * WIDTH];

struct vec
{
    int x;
    int y;
    vec(int a, int b)
    {
        x = a;
        y = b;
    }

    vec(int a)
    {
        x = y = a;
    }

    // overload the minus operator
    vec operator-(vec v)
    {
        return vec(x - v.x, y - v.y);
    }
    // overload the plus operator
    vec operator+(vec v)
    {
        return vec(x + v.x, y + v.y);
    }
};

bool check_inside_circle(vec pos, vec center, int radius)
{
    return (pos - center).x * (pos - center).x + (pos - center).y * (pos - center).y <= radius * radius;
}

void show(void)
{

    for (int i = 0; i < HEIGHT; i++)
    {
        fwrite(screen + i * WIDTH, 1, WIDTH, stdout);
        cout << '\n';
    }
}

void circle(vec center)
{
    vec start(center.x - RADIUS, center.y);
    vec end(center.x + RADIUS, center.y);

    /*
    ** *
    **  **

    22 ^__
    */

    for (int i = 0; i <= RADIUS; i += 2)
    {
        for (int j = start.x; j <= end.x; j++)
        {
            if (center.y + i / 2 >= HEIGHT)
                continue;
            vec pos1(j, i + center.y);
            vec pos2(j, i + 1 + center.y);
            bool top = check_inside_circle(pos1, center, RADIUS);
            bool bottom = check_inside_circle(pos2, center, RADIUS);

            if (top && bottom)
            {
                screen[(center.y + i / 2) * WIDTH + j] = '*';
            }
            else if (top)
            {
                screen[(center.y + i / 2) * WIDTH + j] = '^';
            }
            else if (bottom)
            {
                screen[(center.y + i / 2) * WIDTH + j] = '_';
            }
            else
            {
                screen[(center.y + i / 2) * WIDTH + j] = ' ';
            }
        }
    }

    for (int i = 0; i <= RADIUS; i += 2)
    {
        for (int j = start.x; j <= end.x; j++)
        {
            if (center.y - i / 2 < 0)
                continue;
            vec pos1(j, -i + center.y);
            vec pos2(j, -i - 1 + center.y);
            bool top = check_inside_circle(pos1, center, RADIUS);
            bool bottom = check_inside_circle(pos2, center, RADIUS);

            if (top && bottom)
            {
                screen[(center.y - i / 2) * WIDTH + j] = '*';
            }
            else if (top)
            {
                screen[(center.y - i / 2) * WIDTH + j] = '^';
            }
            else if (bottom)
            {
                screen[(center.y - i / 2) * WIDTH + j] = '_';
            }
            else
            {
                screen[(center.y - i / 2) * WIDTH + j] = ' ';
            }
        }
    }

    // for (int i = -RADIUS; i <= RADIUS; i++)
    // {
    //     for (int j = start.x; j <= end.x; j++)
    //     {
    //         vec pos(j, i + center.y);
    //         if (check_inside_circle(pos, center, RADIUS))
    //         {
    //             screen[pos.y * WIDTH + pos.x] = '*';
    //         }
    //     }
    // }
}

void back(void)
{
    printf("\x1b[%dD", WIDTH);
    printf("\x1b[%dA", HEIGHT);
}

int main(void)
{
    // show();

    vec center(WIDTH / 2, RADIUS / 2);
    vec velocity(1,2);
    while (1)
    {
        if (center.y + RADIUS / 2 >= HEIGHT)
        {
            velocity.y *= -1;
        }

        if(center.x + RADIUS == WIDTH)
        {
            velocity.x *= -1;
        }
        memset(screen, ' ', WIDTH * HEIGHT);
        circle(center);
        show();
        sleep(1000 / FPS);
        back();
        center.y += velocity.y;
        center.x += velocity.x;
        if (center.y - RADIUS/2 == 0)
        {
            velocity.y *= -1;
        }
        if (center.x - RADIUS == 0)
        {
            velocity.x *= -1;
        }
    }
    return 0;
}
