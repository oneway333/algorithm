<template>
    <div class="person">
        <!-- 这里面的对象都是调用过value的，可以直接用 -->
        <h1>fuck {{ name }}</h1>
        <h1>fuck {{ age }}</h1>
        <button @click="changeName">name change</button>
        <button @click="addAge">age++</button>
        <button @click="age--">age--</button>
        <button @click="showMsg">show msg</button>
    </div>
</template>

<!-- 这个东西就可以不用写了 -->
<!-- <script lang='ts'>
import { reactive, toRefs, onBeforeMount, onMounted } from 'vue'
export default {
    name: 'Person',
}

</script> -->

<script setup lang="ts" name="Person">
// 解构赋值形式
import {ref} from 'vue'


let name = ref('fuck');
let age = ref(12);
let msg = 'shit'
let obj = { name: 'fuck' };
let arr = [1, 2, 3]

// 方法
function changeName() {
    // name = 'damn'   // 这样修改变量，name确实改变了，但是页面不会发生变化
    name.value = 'damn'  // name完成了数据代理和数据劫持，是一个对象了，所以要调用value方法来修改里面的值
}

function addAge() {
    // age++;
    age.value++;   // name完成了数据代理和数据劫持，是一个对象了，所以要调用value方法来修改里面的值
}

function showMsg() {
    alert(msg)
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
