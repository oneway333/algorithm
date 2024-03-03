import { defineStore } from "pinia";

export const useAddStore = defineStore('add', {
    // 存数据的
    state(){
        return {
            num: 123
        }
    },
})

