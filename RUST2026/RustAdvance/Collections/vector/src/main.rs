mod reading;
mod updating;
mod defining;
mod iterating;
mod enum_vec;
use reading::*;
fn main() {
    updating::update();
    defining::defining();
    reading::readingElements();
    iterating::iteratingVector();
    enum_vec::accountsVector();
    // vectors are impl by generics 
    // Vec<T> is generic , T = any type of data

}