fn main() {
    let number_list = vec![12,23,45,56,7,12];
    let mut largest_number = &number_list[0];

    for number in &number_list {
        if number > largest_number {
            largest_number = number;
        }
    }

    println!("The largest number is {largest_number}");
}
