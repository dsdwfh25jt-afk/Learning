pub fn iteratingVector() {
    let mut vec: Vec<i32> = vec![1,2,3,4,5,6];

    // printing every element of the vec
    for i in &vec {
        println!("{i}");
    }

    // multiplying every value by 10 of the vec element
    for i in &mut vec {
        *i *= 10;
    }

    // again prirting every element of the vec 
     for i in &vec {
        println!("{i}");
    }

}