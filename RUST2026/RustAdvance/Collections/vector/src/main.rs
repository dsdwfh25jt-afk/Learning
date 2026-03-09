// use crate::vector::reading::{readingElements};
mod reading;
mod updating;
mod defining;
mod iterating;
use reading::*;
fn main() {
    updating::update();
    defining::defining();
    reading::readingElements();
    iterating::iteratingVector();
    // vectors are impl by generics 
    // Vec<T> is generic , T = any type of data
    let v : Vec<i32> = Vec::new();

    // vec1 macro create a vector of i32 
    let vv = vec![1,2,3,4];

}