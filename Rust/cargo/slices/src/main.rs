fn main() {
    // string slices 

    let s = String::from("this is a slice");
    let this = &s[0..4];
    let comeplete_string = &s[0..15];
    let cpmplete_string = &s[..];
    let starting = &s[..8];
    let ending = &s[4..];
    println!("{}",this);
    println!("{}",comeplete_string);
    println!("{}",cpmplete_string);
    println!("{}",starting);
    println!("{}",ending);
    println!("{}",s);

}