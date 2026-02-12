fn main() {
    let s1 = String::from("Hello i am gaurav k bhat from india and iam here to let you know that ill be great one day");
    let (s2,len) = calculate_length(s1);

    println!("The lenght of string '{s2}' is {len}");
}

fn calculate_length(s: String) -> (String , usize) {
    let lenght = s.len();
    (s,lenght)
}