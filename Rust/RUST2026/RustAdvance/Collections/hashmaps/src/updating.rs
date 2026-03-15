use std::collections::HashMap;
pub fn updating_values() {
    let mut team_score = HashMap::new();

    // ------------Overwriting a Value---------------

    // first inserted key and val 
    team_score.insert("Team Red".to_string(), 50);
    // overriting the val of key Team Red 
    team_score.insert("Team Red".to_string(),100);
    // it will drop the second key and keep the 
    // first key and update its val  
    // The original value of 50 has been overwritten.

    // ----------Adding a Key and Value 
    //        Only If a Key Isn’t Present-------------

    team_score.entry("Team Blue".to_string()).or_insert(50);
    // if team blue not exit then it will create and push val 
    team_score.entry("Team Blue".to_string()).or_insert(110);
    // if tean blue exits it will simply do nothing 

    println!("{team_score:#?}");  

    // -------Updating a Value Based on the Old Value--------
    
    // if some one is wathing explain this 
    let text = "hello world wonderful world";
    let mut map = HashMap::new();

    for word in text.split_whitespace() {
        let count = map.entry(word).or_insert(0);
        *count += 1; // how this dereference operator only refering to the value
    }

    println!("{map:?}");

}