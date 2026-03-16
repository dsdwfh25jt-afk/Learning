use std::fs::File;
pub fn expect_method() {   
    let greetings_from_expect = File::open("somefile.exe")
        .expect("file should be included in this project");

    // expect works just same as unwrap() but the unwrap dont
    // write messeges to display in the call of panic! as expect does 
    // so production like expect more than unwrap it comes to messeging
    // at time of error showing or throwing  
}