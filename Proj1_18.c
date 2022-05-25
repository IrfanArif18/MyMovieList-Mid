/*  
    Mid Term Project
    "MyMovieList"

    Algoritma dan Pemrograman-01
    Group 18:
    Irfan Arif Maulana              (1906379270)
    Raden Wisnu Andhika Pranidhia   (1906354545)

    Teknik Elektro
    Departemen Teknik Elektro Fakultas Teknik
    Universitas Indonesia
    2021
*/

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#include "data.h"
#include "titles.h"
#include "login.h"
#include "sort-search.h"
#include "admin.h"

int main() {
    int reset = 1, login;

    titleScreen();
    getData();

    do {
        switch(programMenu()) {
            case 1:
                login = loginScreen();
                if(login) {
                    do {
                        switch(menuScreen()) {
                            case 1: displayMenuScreen();
                                    break;
                            case 2: editMovieScreen();
                                    break;
                            case 3: newMovieScreen();
                                    break;
                            default: login = 0;
                                    break;
                        }
                    } while(login);
                }
                break;
            case 2:
                helpScreen();
                break;
            default:
                reset = 0;
                break;
        }
    } while(reset);

    exitScreen();

    return 0;
}