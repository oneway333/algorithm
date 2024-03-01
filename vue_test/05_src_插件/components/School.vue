<template>
    <div class="school">
        <h2>School {{name}}</h2>
        <h2>School {{addr}}</h2>
    </div>
</template>

<script>
export default {
    name: "School",    // 组件的名称
    data(){
        return {
            name: 'fuck',
            addr: 'shit'
        }
    },
};
</script>

<style>
    .school {
        background-color: gray;
    }
</style>