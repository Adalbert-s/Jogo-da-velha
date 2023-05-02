#include<stdlib.h>
#include<GL/Glut.h>
#include<stdio.h>
#include<time.h>
#include <math.h>

#define PI 3.1415926535898

GLfloat escala = 1;
float r,g,b;
float x,y;

int jogada = 1;
int resultado [3][3];
int vez, contador = 0, Jogo_terminado = 0;
int M1,M2, M3, M4, M5, M6, M7, M8, M9;
bool check = true;

void Texto(char *aux)
{
    char *p;
    p = aux;
    while(*p)
        glutStrokeCharacter(GLUT_STROKE_MONO_ROMAN,*p++);
}

void entradaTexto()
{

    glTranslatef(170,120,0);
    glScalef(0.2, 0.2, 0.2);
    glColor3f(1,1,1);
    glLineWidth(2);
    Texto("Criado por: Adalberto dos Santos\n");
    glEnd();
}

void circulo()
{

    float ang, x, y;
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++)
    {

        ang = (i * PI) / 180.0;
        x = 0 + (cos(ang) * 70);
        y = 0 + (sin(ang) * 80);
        glVertex2f(x, y);
    }
}

void desenhaTabuleiro()
{

    glMatrixMode (GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1, 1, 1);

    //vertical

    glBegin(GL_LINES);
    glVertex2i(200, 200);
    glVertex2i(200, 800);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(400, 200);
    glVertex2i(400, 800);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(800, 200);
    glVertex2i(800, 800);
    glEnd();

    //horizontal
    glBegin(GL_LINES);
    glVertex2i(200, 200);
    glVertex2i(800, 200);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(600, 200);
    glVertex2i(600, 800);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(200, 400);
    glVertex2i(800, 400);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(200, 600);
    glVertex2i(800, 600);
    glEnd();

    glBegin(GL_LINES);
    glVertex2i(200, 800);
    glVertex2i(800, 800);
    glEnd();
    glFlush();
}

void desenha(int *jogada)
{

    if(*jogada == 1)
    {
        if(vez == 0)
        {
            glMatrixMode (GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(0, 0, 2);
            glBegin(GL_LINES);
            glVertex2i(220, 780);
            glVertex2i(380, 620);
            glEnd();

            glBegin(GL_LINES);
            glVertex2i(380, 780);
            glVertex2i(220, 620);
            glEnd();

            resultado[0][0] = 1;
        }
        else
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(1, 0, 0);
            glLineWidth(6);
            glTranslated(300, 700, 0);
            circulo();
            glEnd();
        }
    }
    if(*jogada == 2)
    {
        if(vez == 0)
        {
            glMatrixMode (GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(0, 0, 2);
            glBegin(GL_LINES);
            glVertex2i(420, 780);
            glVertex2i(580, 620);
            glEnd();
            glBegin(GL_LINES);
            glVertex2i(580, 780);
            glVertex2i(420, 620);
            glEnd();
        }
        else
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(1, 0, 0);
            glLineWidth(6);
            glTranslated(500, 700, 0);
            circulo();
            glEnd();
        }
    }
    if(*jogada == 3)
    {
        if(vez == 0)
        {
            glMatrixMode (GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(0, 0, 2);
            glBegin(GL_LINES);
            glVertex2i(620, 780);
            glVertex2i(780, 620);
            glEnd();

            glBegin(GL_LINES);
            glVertex2i(780, 780);
            glVertex2i(620, 620);
            glEnd();

        }
        else
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(1, 0, 0);
            glLineWidth(6);
            glTranslated(700, 700, 0);

            circulo();
            glEnd();

        }
    }
    if(*jogada == 4)
    {
        if(vez == 0)
        {
            glMatrixMode (GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(0, 0, 2);
            glBegin(GL_LINES);
            glVertex2i(220, 580);
            glVertex2i(380, 420);
            glEnd();

            glBegin(GL_LINES);
            glVertex2i(380, 580);
            glVertex2i(220, 420);
            glEnd();

        }
        else
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(1, 0, 0);
            glLineWidth(6);
            glTranslated(300, 500, 0);
            circulo();
            glEnd();

        }

    }
    if(*jogada == 5)
    {
        if(vez == 0)
        {
            glMatrixMode (GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(0, 0, 2);
            glBegin(GL_LINES);
            glVertex2i(420, 580);
            glVertex2i(580, 420);
            glEnd();
            glBegin(GL_LINES);
            glVertex2i(580, 580);
            glVertex2i(420, 420);
            glEnd();

        }
        else
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(1, 0, 0);
            glLineWidth(6);
            glTranslated(500, 500, 0);
            circulo();
            glEnd();

        }

    }
    if(*jogada == 6)
    {
        if(vez == 0)
        {
            glMatrixMode (GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(0, 0, 2);
            glBegin(GL_LINES);
            glVertex2i(620, 580);
            glVertex2i(780, 420);
            glEnd();
            glBegin(GL_LINES);
            glVertex2i(780, 580);
            glVertex2i(620, 420);
            glEnd();

        }
        else
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(1, 0, 0);
            glLineWidth(6);
            glTranslated(700, 500, 0);
            circulo();
            glEnd();

        }
    }
    if(*jogada == 7)
    {
        if(vez == 0)
        {
            glMatrixMode (GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(0, 0, 2);
            glBegin(GL_LINES);
            glVertex2i(220, 380);
            glVertex2i(380, 220);
            glEnd();
            glBegin(GL_LINES);
            glVertex2i(380, 380);
            glVertex2i(220, 220);
            glEnd();

        }
        else
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(1, 0, 0);
            glLineWidth(6);
            glTranslated(300, 300, 0);
            circulo();
            glEnd();

        }
    }
    if(*jogada == 8)
    {
        if(vez == 0)
        {
            glMatrixMode (GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(0, 0, 2);
            glBegin(GL_LINES);
            glVertex2i(420, 380);
            glVertex2i(580, 220);
            glEnd();
            glBegin(GL_LINES);
            glVertex2i(580, 380);
            glVertex2i(420, 220);
            glEnd();

        }
        else
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(1, 0, 0);
            glLineWidth(6);
            glTranslated(500, 300, 0);
            circulo();
            glEnd();

        }
    }
    if(*jogada == 9)
    {
        if(vez == 0)
        {
            glMatrixMode (GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(0, 0, 2);
            glBegin(GL_LINES);
            glVertex2i(620, 380);
            glVertex2i(780, 220);
            glEnd();
            glBegin(GL_LINES);
            glVertex2i(780, 380);
            glVertex2i(620, 220);
            glEnd();

        }
        else
        {
            glMatrixMode(GL_MODELVIEW);
            glLoadIdentity();
            glColor3f(1, 0, 0);
            glLineWidth(6);
            glTranslated(700, 300, 0);
            circulo();
            glEnd();

        }
    }
}

void Vez_Jogador1()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    if(vez == 0)
        glColor3f(0,0,2);
    else
        glColor3f(0,0,0);
    glTranslatef(200,830,0);
    glScalef(0.3, 0.3, 0.3);
    glLineWidth(2);
    Texto("JOGADOR X");
    glEnd();
    glFlush();
}

void Vez_Jogador2()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    if(vez == 0)
        glColor3f(0,0,0);
    else
        glColor3f(1,0,0);
    glTranslatef(200,830,0);
    glScalef(0.3, 0.3, 0.3);
    glLineWidth(2);
    Texto("JOGADOR O");
    glEnd();
    glFlush();
}

void Perdedor()
{

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(490,830,0);
    glScalef(0.3, 0.3, 0.3);
    glLineWidth(2);
    Texto(" PERDEU !!");
}

void vencedor()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1,1,1);
    glTranslatef(300,900,0);
    glScalef(0.5, 0.5, 0.5);
    glLineWidth(2);

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", resultado[i][j]);
        }
        printf("\n\n");
    }
    //verificando as linhas
    for(int i = 0; i < 3; i++)
    {
        if(resultado[i][0] != 0 && resultado[i][0] == resultado[i][1] && resultado[i][1] == resultado[i][2])
        {
            printf("Todos os numeros da linha sao iguais.\n");
            if(resultado[i][0]== 1)
            {
                Jogo_terminado = 1;
                glColor3f(0,0,2);
                Texto("Vencedor:X");
                printf("\nGerando perdedor...\n");

                glColor3f(1,0,0);
                Perdedor();

            }
            else
            {
                Jogo_terminado = 1;
                glColor3f(1,0,0);
                Texto("Vencedor:O");
                printf("\nGerando perdedor...\n");

                glColor3f(0,0,2);
                Perdedor();

            }
        }
    }
    // verificar todas as colunas
    for(int j = 0; j < 3; j++)
    {
        if(resultado[0][j] != 0 && resultado[0][j] == resultado[1][j] && resultado[1][j] == resultado[2][j])
        {
            printf("Todos os numeros da coluna sao iguais.\n");
            if(resultado[0][j]== 1)
            {
                Jogo_terminado = 1;
                glColor3f(0,0,2);
                Texto("Vencedor:X");
                printf("\nGerando perdedor...\n");

                glColor3f(1,0,0);
                Perdedor();

            }
            else
            {
                Jogo_terminado = 1;
                glColor3f(1,0,0);
                Texto("Vencedor:O");
                printf("\nGerando perdedor...\n");

                glColor3f(0,0,2);
                Perdedor();
            }
        }
    }

    // verificar diagonais
    if(resultado[0][0] != 0 && resultado[0][0] == resultado[1][1] && resultado[1][1] == resultado[2][2])
    {
        printf("Todos os numeros da diagonal sao iguais.\n");
        if(resultado[0][0]== 1)
        {
            Jogo_terminado = 1;
            glColor3f(0,0,2);
            Texto("Vencedor:X");
            printf("\nGerando perdedor...\n");

            glColor3f(1,0,0);
            Perdedor();

        }
        else
        {
            Jogo_terminado = 1;
            glColor3f(1,0,0);
            Texto("Vencedor:O");
            printf("\nGerando perdedor...\n");

            glColor3f(0,0,2);
            Perdedor();
        }
    }

    if(resultado[0][2] != 0 && resultado[0][2] == resultado[1][1] && resultado[1][1] == resultado[2][0])
    {
        printf("Todos os numeros da diagonal sao iguais.\n");
        if(resultado[0][2]== 1)
        {
            Jogo_terminado = 1;
            glColor3f(0,0,2);
            Texto("Vencedor:X");
            printf("\nGerando perdedor...\n");

            glColor3f(1,0,0);
            Perdedor();

        }
        else
        {
            Jogo_terminado = 1;
            glColor3f(1,0,0);
            Texto("Vencedor:O");
            printf("\nGerando perdedor...\n");

            glColor3f(0,0,2);
            Perdedor();

        }
    }
    contador ++;
    printf("\ncontador = %d\n\n", contador);
    if(contador == 9)
    {
        Jogo_terminado = 1;
        Texto("Empatado");
        glColor3f(0,0,2);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glTranslatef(490,830,0);
        glScalef(0.3, 0.3, 0.3);
        glLineWidth(2);
        Texto(" JOGADOR X");


    }
    glEnd();
    glFlush();
}

void mouse(int button, int state, int mousex, int mousey)
{

    int jogada;

    if(Jogo_terminado == 0)
    {

        if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {
            jogada = 1;
            if(mousex > 200 && mousex < 400 && mousey > 200 && mousey < 300)
            {
                printf("\nM1 : %d\n", M1);
                if(M1 == 0)
                {
                    desenha(&jogada);
                    M1 = 1;
                    printf("\nM1 : %d\n\n", M1);
                    if(vez == 0)
                    {
                        resultado[0][0] = 1;
                        vez = 1;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador2);
                    }
                    else
                    {
                        resultado[0][0] = 2;
                        vez = 0;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador1);
                    }
                    vencedor();
                }
            }
        }
        if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {
            jogada = 2;
            if(mousex > 401 && mousex < 600 && mousey > 200 && mousey < 300)
            {
                printf("\nM2 : %d\n", M2);
                if(M2 == 0)
                {
                    desenha(&jogada);
                    M2 = 1;
                    printf("\nM2 : %d\n", M2);
                    if(vez == 0)
                    {
                        resultado[0][1] = 1;
                        vez = 1;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador2);
                    }
                    else
                    {
                        resultado[0][1] = 2;
                        vez = 0;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador1);
                    }
                    vencedor();
                }
            }
        }
        if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {
            jogada = 3;
            if(mousex > 601 && mousex < 800 && mousey > 200 && mousey < 300)
            {
                printf("\nM3 : %d\n", M3);
                if(M3 == 0)
                {
                    desenha(&jogada);
                    M3 = 1;
                    printf("\nM3 : %d\n", M3);
                    if(vez == 0)
                    {
                        resultado[0][2] = 1;
                        vez = 1;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador2);
                    }
                    else
                    {
                        resultado[0][2] = 2;
                        vez = 0;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador1);
                    }
                    vencedor();
                }
            }
        }
        if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {
            jogada = 4;
            if(mousex > 200 && mousex < 400 && mousey > 300 && mousey < 400)
            {
                printf("\nM4 : %d\n", M4);
                if(M4 == 0)
                {
                    desenha(&jogada);
                    M4 = 1;
                    printf("\nM4 : %d\n", M4);
                    if(vez == 0)
                    {
                        resultado[1][0] = 1;
                        vez = 1;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador2);
                    }
                    else
                    {
                        resultado[1][0] = 2;
                        vez = 0;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador1);
                    }
                    vencedor();
                }
            }
        }
        if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {

            jogada = 5;
            if(mousex > 400 && mousex < 600 && mousey > 300 && mousey < 400)
            {
                printf("\nM5 : %d\n", M5);
                if(M5 == 0)
                {
                    desenha(&jogada);
                    M5 = 1;
                    printf("\nM5 : %d\n", M5);
                    if(vez == 0)
                    {
                        resultado[1][1] = 1;
                        vez = 1;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador2);
                    }
                    else
                    {
                        resultado[1][1] = 2;
                        vez = 0;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador1);
                    }
                    vencedor();
                }
            }
        }
        if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {
            jogada = 6;
            if(mousex > 600 && mousex < 800 && mousey > 300 && mousey < 400)
            {
                printf("\nM6 : %d\n", M6);
                if(M6 == 0)
                {
                    desenha(&jogada);
                    M6 = 1;
                    printf("\nM6 : %d\n", M6);
                    if(vez == 0)
                    {
                        resultado[1][2] = 1;
                        vez = 1;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador2);
                    }
                    else
                    {
                        resultado[1][2] = 2;
                        vez = 0;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador1);
                    }
                    vencedor();
                }
            }
        }
        if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {
            jogada = 7;
            if(mousex > 200 && mousex < 400 && mousey > 500 && mousey < 600)
            {
                printf("\nM7 : %d\n", M7);
                if(M7 == 0)
                {
                    desenha(&jogada);
                    M7 == 1;
                    printf("\nM7 : %d\n", M7);
                    if(vez == 0)
                    {
                        resultado[2][0] = 1;
                        vez = 1;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador2);
                    }
                    else
                    {
                        resultado[2][0] = 2;
                        vez = 0;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador1);
                    }
                    vencedor();
                }
            }
        }
        if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {
            jogada = 8;
            if(mousex > 400 && mousex < 600 && mousey > 500 && mousey < 600)
            {
                printf("\nM8 : %d\n", M8);
                if(M8 == 0)
                {
                    desenha(&jogada);
                    M8 = 1;
                    printf("\nM8 : %d\n", M8);
                    if(vez == 0)
                    {
                        resultado[2][1] = 1;
                        vez = 1;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador2);
                    }
                    else
                    {
                        resultado[2][1] = 2;
                        vez = 0;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador1);
                    }
                    vencedor();
                }
            }
        }
        if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
        {
            jogada = 9;
            if(mousex > 600 && mousex < 800 && mousey > 500 && mousey < 600)
            {
                printf("\nM9 : %d\n", M9);
                if(M9 == 0)
                {
                    desenha(&jogada);
                    M9 = 1;
                    printf("\nM9 : %d\n", M9);
                    if(vez == 0)
                    {
                        resultado[2][2] = 1;
                        vez = 1;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador2);
                    }
                    else
                    {
                        resultado[2][2] = 2;
                        vez = 0;
                        Vez_Jogador1();
                        Vez_Jogador2();
                        glutDisplayFunc(Vez_Jogador1);
                    }
                    vencedor();
                }
            }
        }
        glutPostRedisplay();

    }

    /*if(button==GLUT_RIGHT_BUTTON)
        {
        glClearColor(0, 0, 0, 0);
        check=true;
            x = mousex;
            y = 1000-mousey;
            b = g = r = 1;
        glClear(GL_COLOR_BUFFER_BIT);
        desenhaTabuleiro();
        entradaTexto();
        }*/
}

void display(void)
{

    glColor3f(r,g,b);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1000.0, 0.0, 1000.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    Vez_Jogador1();
    if(check)
    {
        desenhaTabuleiro();
    }
    entradaTexto();
    glFlush();
}

int main(int argc, char* argv[])
{

    srand(time(NULL));
    glutInit(&argc,argv);
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Jogo");
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}
