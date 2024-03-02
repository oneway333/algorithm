<template>
    <div class="person">
        <table>
            <tbody>
                <tr>
                    <td>firstname:</td>
                    <td>
                        <!-- <input type="text" v-model="full.first"> -->
                        <input type="text" v-model="first">
                    </td>
                </tr>
                <tr>
                    <td>secondname:</td>
                    <td>
                        <!-- <input type="text" v-model="full.second"> -->
                        <input type="text" v-model="second">
                    </td>
                </tr>
                <tr>
                    <td>fullname:</td>
                    <td>
                        <!-- <span>{{ full.first }} - {{ full.second }}</span> -->
                        <span>{{ full }}</span>
                    </td>
                </tr>
            </tbody>
        </table>
        <button @click="changeFull">change full</button>
    </div>
</template>

<script setup lang="ts" name="Person">
import { ref, reactive, computed} from 'vue'
// 感觉最简单的实现。。。
// let full = reactive({ first: '', second: '' })
let first = ref('')
let second = ref('')

// 计算属性：传入回调函数，返回值给那个计算属性，而且计算属性多次调用只会执行一次，不像方法调几次执行几次，所以尽量考虑计算属性
// 因为可能会有复杂的属性处理逻辑，所以要做好封装
// 简写
// let full = computed(()=> first.value + '-' + second.value)
// 这么定义的计算属性只读，不可修改
// let full = computed(()=> {
//     return first.value.slice(0, 2).toUpperCase() + '-' + second.value.slice(3)
// })

// 给出get，set实现可读写
let full = computed({
    get(){
        return first.value.slice(0, 2).toUpperCase() + '-' + second.value.slice(1)
    },
    set(val){
        first.value = val.split('-')[0]
        second.value = val.split('-')[1]
    },
})

function changeFull(){
    full.value = 'fuck-you'
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
