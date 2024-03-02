<template>
    <div class="person">
        <h2>sum {{ sum }}</h2>
        <h2>bigSum {{ bigSum }}</h2>
        <button @click="add">sum++</button>
        <hr>
        <button @click="oneMore">one more</button>
        <img v-for="g, index of Gundam" :key="index" :src='g' alt="">

    </div>
</template>

<script setup lang="ts" name="Person">
import useGundam from '@/hooks/useGundam'
import useSum from '@/hooks/useSum'

// 解构赋值
const {Gundam, oneMore} = useGundam()
const {bigSum, sum, add} = useSum()


</script>

<style lang="scss" scoped>
.person {
    background-color: deepskyblue;
    box-shadow: 0 0 20px yellow;
    border-radius: 20px;
    padding: 20px;
}

img {
    height: 100px;
}
</style>@/hooks/useGundam
