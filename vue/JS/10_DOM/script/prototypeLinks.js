function prototypeLinks(doc) {
    let obj = doc;
    while (obj != null) {
        let t = obj.__proto__;
        if (t == null) obj = obj.Prototype;
        else obj = t;
        console.log(obj);
    }
}