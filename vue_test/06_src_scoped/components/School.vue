<template>
    <div class="stu">
        <h2 class="h2">School {{name}}</h2>
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

<!-- scoped防止因为类名相同造成的css冲突 -->
<!-- 还挺常用的 -->
<!-- less好像也就是可以嵌套了 -->
<style scoped lang="less">
    .stu {
        background-color: gray;
        .h2{
            font-size: 40px;
        }
    }
</style>