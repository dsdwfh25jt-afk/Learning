fn main() {
    let s1 = String::from("Hello");
    let s2 = s1;  // here we change the ownership to s2 from s1 
    // println!("{s1}");    this s1 will be invalid after giving ownership of that to s2 
    // s1 is no valid from let s2 = s1 ; line 
    println!("{s2}");
}