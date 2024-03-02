<template>
    <div class="person">
        <h1>fuck {{ name }}</h1>
        <h1>fuck {{ age }}</h1>
        <button @click="changeName">name change</button>        
        <button @click="addAge">age++</button>        
        <button @click="showMsg">show msg</button>        
    </div>
</template>

<script lang='ts'>
import { reactive, toRefs, onBeforeMount, onMounted } from 'vue'
export default {
    name: 'Person',
    setup() {
        // 数据
        // 这样定义变量，变量不是响应式的，页面不会因此有变化
        let name = 'fuck';
        let age:number = 12;
        let msg = 'shit'




        // 方法
        function changeName(){
            name = 'damn'   // 这样修改变量，name确实改变了，但是页面不会发生变化
        }

        function addAge(){
            age++;
        }

        function showMsg(){
            alert(msg)
        }

        return {name, age, changeName, addAge, showMsg}

    },
}

</script>

<style lang="scss" scoped>
    .person {
        background-color: deepskyblue;
        box-shadow: 0 0 20px yellow;
        border-radius: 20px;
        padding: 20px;        

    }
</style>
