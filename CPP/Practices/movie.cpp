#include "movie.h"

int main() {

    class movie first;
    first.get_movie();
    first.print_movie();

    string title = "the pirate's booty";
    string * p_title = &title;
    string director = "captain aflac duck";
    string * p_director = &director;
    int release_yr = 2017;
    int * p_release_yr = &release_yr;
    string viewer_rating = "PG-13";
    string * p_viewer_rating = &viewer_rating;

    first.get_values_then_pass_pointers_to_constructor(p_title, p_director, p_release_yr, p_viewer_rating);
    first.print_movie();

    return 0;
}