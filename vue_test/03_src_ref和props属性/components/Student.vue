<template>
    <div>
        <h2>Student {{name}}</h2>
        <h2>Student {{myAge+1}}</h2>
        <h2>Student {{gender}}</h2>
        <h2>Student {{fuck}}</h2>
        <h2>Student {{shit}}</h2>
        <button @click="change">fuck you</button>
    </div>
</template>

<script>
export default {
    name: "Student",    // 组件的名称
    data(){
        return {
            // name: 'fuck',
            // age: '13',
            // gender: 'male'
            myAge: this.age   // this获取props里面传过来的this
        }
    },
    props: ['name', 'age', 'gender', 'fuck', 'shit'],  // 简单接收

    // 类型声明式接收
    // props: {
    //     name: String,
    //     age: Number,
    //     gender: String
    // },
    
    // 复杂接收
    // props: {
    //     name: {
    //         type: String,
    //         required: true
    //     },
    //     age: {
    //         type: Number,
    //         default: 99
    //     },
    //     gender: {
    //         type: String,
    //         required: true
    //     }
    // },

    methods: {
        change(){
            this.myAge = 99
        }
    }
};
</script>

<style>
</style>