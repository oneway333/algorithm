<template>
    <div>
        <h2>Student {{name}}</h2>
        <h2>Student {{age}}</h2>
        <button @click="showAlert">fuck you</button>
    </div>
</template>

<script>
export default {
    name: "Student",    // 组件的名称
    data(){
        return {
            name: 'fuck',
            age: '13'
        }
    },
    methods: {
        showAlert(){
            alert('fuck you')
        }
    }
};
</script>

<style>
</style>