fn main() {
    let name = String::from("Gaurav");

    // 👇 Fix this line so name is borrowed, not moved
    print_name(&name);

    println!("Again: {}", name);
}

fn print_name(s: &String ) {

    println!("Hello, {}", s );
}
