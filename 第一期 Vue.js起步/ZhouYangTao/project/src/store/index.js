import Vue from 'vue'
import Vuex from 'vuex'

Vue.use(Vuex)

import count_store from './modules/count_store.js';

export default new Vuex.Store({
    modules:{
        count:count_store
    }
})