<template>
    <div class="school">
        <h2 @click="showName">School {{name}}</h2>
        <h2>School {{addr}}</h2>
    </div>
</template>

<script>
import methods from '../scripts/mixin.js'


export default {
    name: "School",    // 组件的名称
    data(){
        return {
            name: 'fuck',
            addr: 'shit'
        }
    },
    // 好诡异的写法，没调用
    mixins: [methods]
};
</script>

<style>
    .school {
        background-color: gray;
    }
</style>