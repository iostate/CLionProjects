#ifndef CPP_MOVIE_H
#define CPP_MOVIE_H
#include <string>
#include<sstream>
#include <iostream>
using namespace std;

/**
 * Defines a movie object
 */
class movie {

public:
    string title;
    string director;
    int release_year;
    string rating;
    void set_values(string, string, int, string);
    void get_movie();
    void get_values_then_pass_pointers_to_constructor(string *, string *, int *, string*);
    void print_movie();
} movie_object;

/**
 * Explicitly set the values for a movie object.
 * @param user_title string Title of the movie.
 * @param user_director string Director of the movie.
 * @param user_ryear int Release year of the movie.
 * @param user_rating string The viewer rating of the movie.
 */
void movie::set_values(string user_title, string user_director, int user_ryear, string user_rating) {
    title = user_title;
    director = user_director;
    release_year = user_ryear;
    rating = user_rating;
}

/**
 * Ask the user to input data for the movie object.
 */
void movie::get_movie(void) {
    string usr_ryear;
    cout << "Enter the movie title: ";
    getline(cin, title);
    cout << "Enter the director: ";
    getline(cin, director);
    cout << "Enter the release year: ";
    getline(cin, usr_ryear);
    stringstream(usr_ryear) >> release_year;
    cout << "Enter the viewer rating: ";
    getline(cin, rating);
}

/**
 * Print the details of a movie.
 */
void movie::print_movie(void) {
    cout << "Title: " + title << endl;
    cout << "Director: " + director << endl;
    cout << "Release year: " << release_year << endl;
    cout << "Viewer Rating: " + rating << endl;
}

/**
 * Create a movie object using pointers.
 * @param p_user_title string * pointer to the title of the movie.
 * @param p_user_director string * pointer to the director of the movie.
 * @param p_user_ryear int * pointer to the release year of the movie.
 * @param p_user_rating string * pointer to the viewer rating of the movie.
 */
void movie::get_values_then_pass_pointers_to_constructor(string * p_user_title, string *p_user_director, int * p_user_ryear, string * p_user_rating) {
    title = *p_user_title;
    release_year = *p_user_ryear;
    director = *p_user_director;
    rating = *p_user_rating;
}

#endif //CPP_MOVIE_H
