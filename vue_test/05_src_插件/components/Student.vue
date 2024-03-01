<template>
    <div>
        <h2>Student {{name | filter}}</h2>
        <h2>Student {{gender}}</h2>
    </div>
</template>

<script>
export default {
    name: "Student",    // 组件的名称
    data(){
        return {
            name: 'fadfucasdfsadf',
            gender: 'male',
            myAge: this.age   // this获取props里面传过来的this
        }
    },

};
</script>

<style>
</style>