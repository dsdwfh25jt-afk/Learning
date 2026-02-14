// fucntion for get lenght of the string 

fn main() {
    let words = String::from("This is a String");
    let lenght = string_length(&words);
    println!("The length of the string is : {}",lenght);
}

fn string_length(words : &str) -> usize {
    words.chars().count()
}