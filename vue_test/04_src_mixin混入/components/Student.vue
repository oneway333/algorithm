<template>
    <div>
        <h2 @click="showName">Student {{name}}</h2>
        <h2>Student {{gender}}</h2>
    </div>
</template>

<script>
export default {
    name: "Student",    // 组件的名称
    data(){
        return {
            name: 'fuck1',
            gender: 'male',
            myAge: this.age   // this获取props里面传过来的this
        }
    },
    methods: {
        showName(){
            alert(this.name)
        }
    }
};
</script>

<style>
</style>