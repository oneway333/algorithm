<template>
    <div class="banner">
        <ul>
            <li v-for="i, index of imgAddr" :key="index" v-show="n == index">
                <img :src="i ? require(`${i}`) : ''" alt="">
            </li>
        </ul>
        <button v-for="i, index of imgAddr" :key="index" @click="change($event, index)"></button>
    </div>
</template>

<script>

export default {
    name: 'App',
    data() {
        return {
            n: 0,
            imgAddr: [
                './assets/1.png',
                './assets/2.png',
                './assets/3.jpg',
            ],
        }
    },
    computed: {
        imgAddrLen(){
            return this.imgAddr.length
        }
    },
    mounted(){
        // vue2注意要使用箭头函数
        setInterval(() => {
           this.n = (this.n + 1) % this.imgAddrLen
        }, 5000);
    },
    methods: {
        change(e, index){
            this.n = index
            console.log(document.title);
        }
    },
    beforeDestroy(){
        clearTimeout()
    }

}

</script>

<style scoped>
img {
    height: 100px;
}

li {
    list-style: none;
    height: 100px;
    width: 100px;
}

button {
    width: 20px;
    height: 20px;
    border-radius: 50%;
}

button:link {
    background-color: gray;
}

button:visited {
    background-color: gray;
}

button:hover {
    background-color: green;
}

button:active {
    background-color: red;
}

</style>
