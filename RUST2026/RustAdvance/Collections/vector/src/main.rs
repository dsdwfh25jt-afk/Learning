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
}